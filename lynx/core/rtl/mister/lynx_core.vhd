-- The Atari Lynx system, from the MiSTer core's LynxTop (lynxTop.vhd) with
-- the MiSTer extras removed for the Phoenix: no savestates, rewind,
-- cheats, fast forward, turbo or FPS overlay; the 64K RAM and the boot ROM
-- are outside (ram_* and bootrom_* ports); the cartridge header is parsed
-- by the loader, which gives bank0size.
--
-- ce is the 16 MHz system tick (one clock in two at 32 MHz).  It can be
-- held low for a while (pause), and everything stops.

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

use work.pRegisterBus.all;
use work.pBus_savestates.all;

entity lynx_core is
   port
   (
      clk                        : in  std_logic;
      ce                         : in  std_logic;
      reset_in                   : in  std_logic;

      -- cartridge ROM: rom_req pulses with rom_addr; answer with rom_ack
      -- and rom_byte (any number of clocks later)
      rom_addr                   : out std_logic_vector(19 downto 0);
      rom_byte                   : in  std_logic_vector( 7 downto 0);
      rom_req                    : out std_logic;
      rom_ack                    : in  std_logic;
      rom_stale                  : out std_logic;  -- the requested byte is no longer wanted
      bank0size                  : in  std_logic_vector(15 downto 0); -- LNX header: bytes per cart page

      -- 64K RAM, a block RAM port clocked by ce (see memorymux.vhd)
      ram_addr                   : out std_logic_vector(15 downto 0);
      ram_din                    : out std_logic_vector(7 downto 0);
      ram_we                     : out std_logic;
      ram_dout                   : in  std_logic_vector(7 downto 0);

      -- boot ROM: data one clock after the address.  The Lynx boot ROM
      -- (512 bytes at $FE00), or in boot mode the Phoenix loader's 16K ROM
      -- at $C000 (see memorymux.vhd)
      boot_mode                  : in  std_logic;
      bootrom_addr               : out std_logic_vector(13 downto 0);
      bootrom_data               : in  std_logic_vector(7 downto 0);

      -- boot mode: the loader's I/O window at $FE00-$FEFF
      io_addr                    : out std_logic_vector(7 downto 0);
      io_dout                    : out std_logic_vector(7 downto 0);
      io_wr                      : out std_logic;
      io_rd                      : out std_logic;
      io_din                     : in  std_logic_vector(7 downto 0);

      -- video: 160x102 pixels, 12-bit RGB (red 11..8, green 7..4, blue
      -- 3..0), address = y * 160 + x
      pixel_out_addr             : out std_logic_vector(13 downto 0);
      pixel_out_data             : out std_logic_vector(11 downto 0);
      pixel_out_we               : out std_logic;
      frame_end                  : out std_logic;  -- the Lynx finished a frame

      -- audio
      audio_l                    : out std_logic_vector(15 downto 0); -- 16 bit signed
      audio_r                    : out std_logic_vector(15 downto 0); -- 16 bit signed

      -- joypad, active high
      JoyUP                      : in  std_logic;
      JoyDown                    : in  std_logic;
      JoyLeft                    : in  std_logic;
      JoyRight                   : in  std_logic;
      Option1                    : in  std_logic;
      Option2                    : in  std_logic;
      KeyB                       : in  std_logic;
      KeyA                       : in  std_logic;
      KeyPause                   : in  std_logic;

      -- debug: the CPU's bus
      dbg_addr                   : out std_logic_vector(15 downto 0);
      dbg_req                    : out std_logic;
      dbg_rnw                    : out std_logic;
      dbg_done                   : out std_logic
   );
end entity;

architecture arch of lynx_core is

   signal reset                  : std_logic;

   -- register
   signal RegBus_Din             : std_logic_vector(BUS_buswidth-1 downto 0);
   signal RegBus_Adr             : std_logic_vector(BUS_busadr-1 downto 0);
   signal RegBus_wren            : std_logic;
   signal RegBus_rst             : std_logic;
   signal RegBus_Dout            : std_logic_vector(BUS_buswidth-1 downto 0);

   type t_reg_wired_or is array(0 to 8) of std_logic_vector(7 downto 0);
   signal reg_wired_or : t_reg_wired_or;

   -- savestate bus, unused
   constant SSBUS_Din            : std_logic_vector(SSBUS_buswidth-1 downto 0) := (others => '0');
   constant SSBUS_Adr            : std_logic_vector(SSBUS_busadr-1 downto 0) := (others => '0');
   constant SSBUS_wren           : std_logic := '0';
   constant SSBUS_rst            : std_logic := '0';

   -- cart
   signal cart_strobe0           : std_logic;
   signal cart_strobe1           : std_logic;
   signal cart_wait              : std_logic;
   signal cart_idle              : std_logic;

   -- timer
   signal IRQ_request            : std_logic;
   signal IRQ_clear              : std_logic;
   signal countup7               : std_logic;

   -- Display DMA
   signal displayLine            : std_logic;
   signal frameEnd               : std_logic;

   signal dma_active             : std_logic;
   signal DMA_RAM_address        : integer range 0 to 65535;
   signal DMAGPU_RAM_dataRead    : std_logic_vector(7 downto 0);

   -- memorymux
   signal bus_request            : std_logic := '0';
   signal bus_rnw                : std_logic := '0';
   signal bus_addr               : unsigned(15 downto 0) := (others => '0');
   signal bus_datawrite          : std_logic_vector(7 downto 0) := (others => '0');
   signal bus_dataread           : std_logic_vector(7 downto 0);
   signal bus_done               : std_logic;

   -- CPU
   signal cpu_idle               : std_logic;
   signal irqdisabled            : std_logic;
   signal irqpending             : std_logic;
   signal irqfinish              : std_logic;

   -- serial
   signal serdat_read            : std_logic;
   signal serialNewTx            : std_logic;
   signal irq_serial             : std_logic;

   -- gpu
   signal GPU_RAM_address        : integer range 0 to 65535;
   signal GPURAM_dataWrite       : std_logic_vector(7 downto 0);
   signal GPURAM_wren            : std_logic;
   signal cpu_sleep              : std_logic;
   signal gpu_idle               : std_logic;
   signal pixel_addr             : integer range 0 to 16319;

begin

   reset      <= reset_in;
   RegBus_rst <= reset_in;
   frame_end  <= frameEnd;
   dbg_addr   <= std_logic_vector(bus_addr);
   dbg_req    <= bus_request;
   dbg_rnw    <= bus_rnw;
   dbg_done   <= bus_done;
   pixel_out_addr <= std_logic_vector(to_unsigned(pixel_addr, 14));

   -- register
   process (reg_wired_or)
      variable wired_or : std_logic_vector(7 downto 0);
   begin
      wired_or := reg_wired_or(0);
      for i in 1 to (reg_wired_or'length - 1) loop
         wired_or := wired_or or reg_wired_or(i);
      end loop;
      RegBus_Dout <= wired_or;
   end process;

   idummyregs : entity work.dummyregs
   port map
   (
      clk          => clk,
      ce           => ce,
      reset        => reset,
      RegBus_Din   => RegBus_Din,
      RegBus_Adr   => RegBus_Adr,
      RegBus_wren  => RegBus_wren,
      RegBus_rst   => RegBus_rst,
      RegBus_Dout  => reg_wired_or(0)
   );

   -- cart (the ROM has no header: the loader skips it)
   icart : entity work.cart
   port map
   (
      clk            => clk,
      ce             => ce,
      reset          => reset,
      hasHeader      => '0',
      bank0size      => bank0size,
      bank1size      => x"0000",
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(1),
      cart_strobe0   => cart_strobe0,
      cart_strobe1   => cart_strobe1,
      cart_wait      => cart_wait,
      cart_idle      => cart_idle,
      cart_stale     => rom_stale,
      rom_addr       => rom_addr,
      rom_byte       => rom_byte,
      rom_req        => rom_req,
      rom_ack        => rom_ack,
      SSBUS_Din      => SSBUS_Din,
      SSBUS_Adr      => SSBUS_Adr,
      SSBUS_wren     => SSBUS_wren,
      SSBUS_rst      => SSBUS_rst,
      SSBUS_Dout     => open
   );

   -- timer
   itimer : entity work.timer
   port map
   (
      clk               => clk,
      ce                => ce,
      reset             => reset,
      fastforward       => '0',
      turbo             => '0',
      RegBus_Din        => RegBus_Din,
      RegBus_Adr        => RegBus_Adr,
      RegBus_wren       => RegBus_wren,
      RegBus_rst        => RegBus_rst,
      RegBus_Dout       => reg_wired_or(2),
      irq_serial        => irq_serial,
      IRQ_out           => IRQ_request,
      IRQ_clr           => IRQ_clear,
      displayLine       => displayLine,
      frameEnd          => frameEnd,
      serialNewTx       => serialNewTx,
      countup7          => countup7,
      debugout          => open,
      debugout16        => open,
      SSBUS_Din         => SSBUS_Din,
      SSBUS_Adr         => SSBUS_Adr,
      SSBUS_wren        => SSBUS_wren,
      SSBUS_rst         => SSBUS_rst,
      SSBUS_Dout        => open
   );

   -- Display DMA
   idisplay_dma : entity work.display_dma
   port map
   (
      clk               => clk,
      ce                => ce,
      reset             => reset,
      RegBus_Din        => RegBus_Din,
      RegBus_Adr        => RegBus_Adr,
      RegBus_wren       => RegBus_wren,
      RegBus_rst        => RegBus_rst,
      RegBus_Dout       => reg_wired_or(3),
      cpu_idle          => cpu_idle,
      displayLine       => displayLine,
      frameEnd          => frameEnd,
      dma_active        => dma_active,
      dma_done          => open,
      RAM_address       => DMA_RAM_address,
      RAM_dataRead      => DMAGPU_RAM_dataRead,
      pixel_out_addr    => pixel_addr,
      pixel_out_data    => pixel_out_data,
      pixel_out_we      => pixel_out_we,
      pixel_out_x       => open,
      pixel_out_y       => open,
      HzcountBCDout     => open,
      SSBUS_Din         => SSBUS_Din,
      SSBUS_Adr         => SSBUS_Adr,
      SSBUS_wren        => SSBUS_wren,
      SSBUS_rst         => SSBUS_rst,
      SSBUS_Dout        => open
   );

   -- Memory Mux
   imemorymux : entity work.memorymux
   port map
   (
      clk                  => clk,
      ce                   => ce,
      reset                => reset,
      bus_request          => bus_request,
      bus_rnw              => bus_rnw,
      bus_addr             => bus_addr,
      bus_datawrite        => bus_datawrite,
      bus_dataread         => bus_dataread,
      bus_done             => bus_done,
      RegBus_Din           => RegBus_Din,
      RegBus_Adr           => RegBus_Adr,
      RegBus_wren          => RegBus_wren,
      RegBus_Dout          => RegBus_Dout,
      cpu_idle             => cpu_idle,
      dma_active           => dma_active,
      DMA_RAM_address      => DMA_RAM_address,
      GPU_RAM_address      => GPU_RAM_address,
      GPURAM_dataWrite     => GPURAM_dataWrite,
      GPURAM_wren          => GPURAM_wren,
      DMAGPURAM_dataRead   => DMAGPU_RAM_dataRead,
      cart_strobe0         => cart_strobe0,
      cart_strobe1         => cart_strobe1,
      cart_wait            => cart_wait,
      serdat_read          => serdat_read,
      ext_ram_addr         => ram_addr,
      ext_ram_din          => ram_din,
      ext_ram_we           => ram_we,
      ext_ram_dout         => ram_dout,
      boot_mode            => boot_mode,
      boot_addr            => bootrom_addr,
      boot_data            => bootrom_data,
      io_addr              => io_addr,
      io_dout              => io_dout,
      io_wr                => io_wr,
      io_rd                => io_rd,
      io_din               => io_din
   );

   -- cpu
   icpu : entity work.cpu
   port map
   (
      clk               => clk,
      ce                => ce,
      reset             => reset,
      cpu_idle          => cpu_idle,
      dma_active        => dma_active,
      cpu_sleep         => cpu_sleep,
      bus_request       => bus_request,
      bus_rnw           => bus_rnw,
      bus_addr          => bus_addr,
      bus_datawrite     => bus_datawrite,
      bus_dataread      => bus_dataread,
      bus_done          => bus_done,
      irqrequest_in     => IRQ_request,
      irqclear_in       => IRQ_clear,
      irqdisabled       => irqdisabled,
      irqpending        => irqpending,
      irqfinish         => irqfinish,
      load_savestate    => '0',
      custom_PCAddr     => x"0000",
      custom_PCuse      => '0',
      SSBUS_Din         => SSBUS_Din,
      SSBUS_Adr         => SSBUS_Adr,
      SSBUS_wren        => SSBUS_wren,
      SSBUS_rst         => SSBUS_rst,
      SSBUS_Dout        => open
   );

   -- math
   imath : entity work.math
   port map
   (
      clk            => clk,
      ce             => ce,
      reset          => reset,
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(4),
      SSBUS_Din      => SSBUS_Din,
      SSBUS_Adr      => SSBUS_Adr,
      SSBUS_wren     => SSBUS_wren,
      SSBUS_rst      => SSBUS_rst,
      SSBUS_Dout     => open
   );

   -- joystick
   ijoypad: entity work.joypad
   port map
   (
      clk            => clk,
      JoyUP          => JoyUP,
      JoyDown        => JoyDown,
      JoyLeft        => JoyLeft,
      JoyRight       => JoyRight,
      Option1        => Option1,
      Option2        => Option2,
      KeyB           => KeyB,
      KeyA           => KeyA,
      KeyPause       => KeyPause,
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(5)
   );

   -- serial (ComLynx not connected: the line idles high)
   iserial : entity work.serial
   port map
   (
      clk            => clk,
      ce             => ce,
      reset          => reset,
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(6),
      serdat_read    => serdat_read,
      serialNewTx    => serialNewTx,
      comm_rx        => '1',
      comm_tx        => open,
      irq_serial     => irq_serial,
      SSBUS_Din      => SSBUS_Din,
      SSBUS_Adr      => SSBUS_Adr,
      SSBUS_wren     => SSBUS_wren,
      SSBUS_rst      => SSBUS_rst,
      SSBUS_Dout     => open
   );

   -- gpu
   igpu : entity work.gpu
   port map
   (
      clk            => clk,
      ce             => ce,
      reset          => reset,
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(7),
      cpu_idle       => cpu_idle,
      dma_active     => dma_active,
      cpu_sleep      => cpu_sleep,
      load_savestate => '0',
      gpu_idle       => gpu_idle,
      irqrequest_in  => IRQ_request,
      irqdisabled    => irqdisabled,
      irqpending     => irqpending,
      irqfinish      => irqfinish,
      RAM_address    => GPU_RAM_address,
      RAM_dataWrite  => GPURAM_dataWrite,
      RAM_wren       => GPURAM_wren,
      RAM_dataRead   => DMAGPU_RAM_dataRead,
      fpscountBCDout => open,
      SSBUS_Din      => SSBUS_Din,
      SSBUS_Adr      => SSBUS_Adr,
      SSBUS_wren     => SSBUS_wren,
      SSBUS_rst      => SSBUS_rst,
      SSBUS_Dout     => open
   );

   -- sound
   isound : entity work.sound
   port map
   (
      clk            => clk,
      ce             => ce,
      reset          => reset,
      turbo          => '0',
      RegBus_Din     => RegBus_Din,
      RegBus_Adr     => RegBus_Adr,
      RegBus_wren    => RegBus_wren,
      RegBus_rst     => RegBus_rst,
      RegBus_Dout    => reg_wired_or(8),
      countup7       => countup7,
      audio_l        => audio_l,
      audio_r        => audio_r,
      SSBUS_Din      => SSBUS_Din,
      SSBUS_Adr      => SSBUS_Adr,
      SSBUS_wren     => SSBUS_wren,
      SSBUS_rst      => SSBUS_rst,
      SSBUS_Dout     => open
   );

end architecture;
