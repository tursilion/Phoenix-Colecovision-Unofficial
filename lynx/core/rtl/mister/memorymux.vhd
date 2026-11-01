library IEEE;
use IEEE.std_logic_1164.all;  
use IEEE.numeric_std.all; 

use work.pRegisterBus.all;  

entity memorymux is
   port 
   (
      clk                  : in  std_logic;
      ce                   : in  std_logic;
      reset                : in  std_logic;
      
      bus_request          : in  std_logic;
      bus_rnw              : in  std_logic;
      bus_addr             : in  unsigned(15 downto 0);
      bus_datawrite        : in  std_logic_vector(7 downto 0);
      bus_dataread         : out std_logic_vector(7 downto 0) := (others => '0');
      bus_done             : out std_logic := '0';
                           
      RegBus_Din           : out std_logic_vector(BUS_buswidth-1 downto 0) := (others => '0');
      RegBus_Adr           : out std_logic_vector(BUS_busadr-1 downto 0) := (others => '0');
      RegBus_wren          : out std_logic := '0';
      RegBus_Dout          : in  std_logic_vector(BUS_buswidth-1 downto 0);
      
      cpu_idle             : in  std_logic;
      dma_active           : in  std_logic;
      DMA_RAM_address      : in  integer range 0 to 65535;
      GPU_RAM_address      : in  integer range 0 to 65535;
      GPURAM_dataWrite     : in  std_logic_vector(7 downto 0);     
      GPURAM_wren          : in  std_logic;     
      DMAGPURAM_dataRead   : out std_logic_vector(7 downto 0);     
      
      cart_strobe0         : out std_logic;
      cart_strobe1         : out std_logic; 
      cart_wait            : in  std_logic; 
      serdat_read          : out std_logic;  
      
      -- Phoenix: the 64K RAM is the board's SRAM.  It behaves like a block
      -- RAM port clocked by ce: address, data and write enable are taken
      -- at a ce clock, and ram_dout has that address's data from the next
      -- ce clock on.
      ext_ram_addr         : out std_logic_vector(15 downto 0);
      ext_ram_din          : out std_logic_vector(7 downto 0);
      ext_ram_we           : out std_logic;
      ext_ram_dout         : in  std_logic_vector(7 downto 0);

      -- boot ROM (outside): data one clock after the address.  The
      -- Lynx boot ROM is 512 bytes at $FE00; in boot mode (the Phoenix
      -- loader) a 16K ROM is at $C000-$FFFF instead, except for Suzy,
      -- Mikey, $FFF9 and the loader's I/O window at $FE00-$FEFF.
      boot_mode            : in  std_logic;
      boot_addr            : out std_logic_vector(13 downto 0);
      boot_data            : in  std_logic_vector(7 downto 0);

      -- boot mode: the loader's I/O window ($FE00-$FEFF).  io_wr pulses
      -- (one ce) with io_addr and io_dout; a read takes io_din at the ce
      -- after io_addr is set.
      io_addr              : out std_logic_vector(7 downto 0);
      io_dout              : out std_logic_vector(7 downto 0);
      io_wr                : out std_logic := '0';
      io_rd                : out std_logic := '0';
      io_din               : in  std_logic_vector(7 downto 0)
   );
end entity;

architecture arch of memorymux is

   type tState is
   (
      IDLE,
      READ_MAPPEDREG,
      READ_REG,
      READ_ROM,
      READ_IO,
      READ_RAM,
      READ_CART,
      WRITE_WAIT
   );
   signal state : tState := IDLE;
   
   signal mappedSuzy             : std_logic;
   signal mappedMikey            : std_logic;
   signal mappedROM              : std_logic;
   signal mappedVector           : std_logic;
   signal mappedreg              : std_logic_vector(7 downto 0);
            
   signal ROM_address            : std_logic_vector(13 downto 0);
   signal ROM_data               : std_logic_vector(7 downto 0);
   signal ROM_lastBank           : std_logic := '0';
            
   -- 64kbyte ram    
   signal RAM_address            : std_logic_vector(15 downto 0);
   signal RAM_dataWrite          : std_logic_vector(7 downto 0);
   signal RAM_WE                 : std_logic;
   signal RAM_WE_muxed           : std_logic;
   signal RAM_dataRead           : std_logic_vector(7 downto 0);
   signal RAM_lastBank           : unsigned(7 downto 0) := (others => '0');
      
   signal wait_cnt               : integer range 0 to 1 := 0;

begin 

   RAM_address <= std_logic_vector(to_unsigned(DMA_RAM_address, 16)) when cpu_idle = '1' and dma_active = '1' else 
                  std_logic_vector(to_unsigned(GPU_RAM_address, 16)) when cpu_idle = '1' and dma_active = '0' else
                  std_logic_vector(bus_addr);
                  
   RAM_WE_muxed <= '0'         when cpu_idle = '1' and dma_active = '1' else 
                   GPURAM_wren when cpu_idle = '1' and dma_active = '0' else
                   RAM_WE;
                  
   RAM_dataWrite <= GPURAM_dataWrite when cpu_idle = '1' else 
                    bus_datawrite;

   ext_ram_addr <= RAM_address;
   ext_ram_din  <= RAM_dataWrite;
   ext_ram_we   <= RAM_WE_muxed;
   RAM_dataRead <= ext_ram_dout;

   boot_addr    <= ROM_address;
   ROM_data     <= boot_data;
      
   mappedreg <= x"0"  & (not mappedVector) & (not mappedROM) & (not mappedMikey) & (not mappedSuzy);
  
   ROM_address <= std_logic_vector(bus_addr(13 downto 0));
   io_addr     <= std_logic_vector(bus_addr(7 downto 0));
   io_dout     <= bus_datawrite;
   
   DMAGPURAM_dataRead <= RAM_dataRead;
   
   cart_strobe0 <= '1' when (bus_request = '1' and bus_rnw = '1' and mappedSuzy  = '1' and bus_addr = 16#FCB2#) else '0';
   cart_strobe1 <= '1' when (bus_request = '1' and bus_rnw = '1' and mappedSuzy  = '1' and bus_addr = 16#FCB3#) else '0';
   
   serdat_read  <= '1' when (bus_request = '1' and bus_rnw = '1' and mappedMikey = '1' and bus_addr = 16#FD8D#) else '0';
  
  
   process (clk)
   begin
      if rising_edge(clk) then
      
         if (reset = '1') then  
            
            state           <= IDLE;
            mappedSuzy      <= '1';
            mappedMikey     <= '1';
            mappedROM       <= '1';
            mappedVector    <= '1';
            
         elsif (ce = '1') then
            
            bus_done      <= '0';
            RAM_WE        <= '0';
            RegBus_wren   <= '0';
            io_wr         <= '0';
            io_rd         <= '0';
            
            if (wait_cnt > 0) then
               wait_cnt <= wait_cnt - 1;
            end if;
            
            case state is
         
               when IDLE =>
                  if (bus_request = '1') then
                     wait_cnt <= 1;
                     
                     if (bus_addr = x"FFF9") then
                        if (bus_rnw = '1') then
                           state <= READ_MAPPEDREG;
                        else
                           mappedSuzy   <= not bus_datawrite(0);
                           mappedMikey  <= not bus_datawrite(1);
                           mappedROM    <= not bus_datawrite(2);
                           mappedVector <= not bus_datawrite(3); 
                           state <= WRITE_WAIT;
                        end if;
                        
                     elsif ((mappedSuzy = '1' and bus_addr >= 16#FC00# and bus_addr < 16#FCFF#) or (mappedMikey = '1' and bus_addr >= 16#FD00# and bus_addr < 16#FDFF#)) then -- suzy & mikey
                        if (bus_rnw = '1') then
                           RegBus_Adr    <= std_logic_vector(bus_addr(8 downto 0));
                           if (bus_addr = 16#FCB2# or bus_addr = 16#FCB3#) then
                              state <= READ_CART;
                           else
                              state <= READ_REG;
                           end if;
                        else
                           state         <= WRITE_WAIT;
                           RegBus_wren   <= '1';
                           RegBus_Adr    <= std_logic_vector(bus_addr(8 downto 0));
                           RegBus_Din    <= bus_datawrite;
                        end if;
                           
                     elsif (boot_mode = '1' and bus_addr(15 downto 8) = x"FE") then -- loader I/O
                        if (bus_rnw = '1') then
                           io_rd <= '1';
                           state <= READ_IO;
                        else
                           io_wr <= '1';
                           state <= WRITE_WAIT;
                        end if;

                     elsif ((bus_addr >= 16#FFFA# and mappedVector = '1') or (bus_addr >= 16#FE00# and bus_addr < 16#FFF9# and mappedROM = '1') or
                            (boot_mode = '1' and bus_addr >= 16#C000# and bus_rnw = '1')) then
                        if (bus_rnw = '1') then
                           if (ROM_lastBank = ROM_address(8) and boot_mode = '0') then
                              wait_cnt <= 0;
                           end if;
                           ROM_lastBank <= ROM_address(8);
                           state        <= READ_ROM;
                        else
                           state <= WRITE_WAIT;
                        end if;
                           
                     else --if (bus_addr < 16#FC00#)
                        if (bus_rnw = '1') then
                           if (RAM_lastBank = bus_addr(15 downto 8)) then
                              wait_cnt <= 0;
                           end if;
                           RAM_lastBank <= bus_addr(15 downto 8); -- possible it must invalidate when access from DMA/GPU happened?
                           state        <= READ_RAM;
                              else
                           state  <= WRITE_WAIT;
                           RAM_WE <= '1';
                        end if;
                        
                     end if;
                  end if;
                  
               when READ_MAPPEDREG =>
                  bus_dataread <= mappedreg;
                  if (wait_cnt = 0) then
                     state    <= IDLE;
                     bus_done <= '1';
                  end if;
               
               when READ_REG =>
                  bus_dataread <= RegBus_Dout;
                  if (wait_cnt = 0) then
                     state    <= IDLE;
                     bus_done <= '1';
                  end if;
               
               when READ_IO =>
                  bus_dataread <= io_din;
                  if (wait_cnt = 0) then
                     state    <= IDLE;
                     bus_done <= '1';
                  end if;

               when READ_ROM =>
                  bus_dataread <= ROM_data;
                  if (wait_cnt = 0) then
                     state        <= IDLE;
                     bus_done     <= '1';
                  end if;
               
               when READ_RAM =>
                  bus_dataread <= RAM_dataRead;
                  if (wait_cnt = 0) then
                     state     <= IDLE;
                     bus_done  <= '1';
                  end if;
                  
               when READ_CART =>
                  bus_dataread <= RegBus_Dout;
                  if (wait_cnt = 0 and cart_wait = '0') then
                     state    <= IDLE;
                     bus_done <= '1';
                  end if;
                  
               when WRITE_WAIT =>
                  if (wait_cnt = 0) then
                     state    <= IDLE;
                     bus_done <= '1';
                  end if;
                  
            end case;
            
         end if;
      
      end if;
   end process;
   

end architecture;





