-----------------------------------------------------------------
--------------- Bus Package --------------------------------
-----------------------------------------------------------------

library IEEE;
use IEEE.std_logic_1164.all;  
use IEEE.numeric_std.all;     

package pBus_savestates is

   constant SSBUS_buswidth : integer := 64;
   constant SSBUS_busadr   : integer := 7;
   
   type savestate_type is record
      Adr         : integer range 0 to (2**SSBUS_busadr)-1;
      upper       : integer range 0 to SSBUS_buswidth-1;
      lower       : integer range 0 to SSBUS_buswidth-1;
      size        : integer range 0 to (2**SSBUS_busadr)-1;
      defval      : std_logic_vector(SSBUS_buswidth-1 downto 0);
   end record;
  
end package;

-----------------------------------------------------------------
--------------- Reg Interface -----------------------------------
-----------------------------------------------------------------

library IEEE;
use IEEE.std_logic_1164.all;  
use IEEE.numeric_std.all;  

library work;
use work.pBus_savestates.all;

entity eReg_SS is
   generic
   (
      Reg       : savestate_type;
      index     : integer := 0
   );
   port 
   (
      clk       : in    std_logic;
      BUS_Din   : in    std_logic_vector(SSBUS_buswidth-1 downto 0);
      BUS_Adr   : in    std_logic_vector(SSBUS_busadr-1 downto 0);
      BUS_wren  : in    std_logic;
      BUS_rst   : in    std_logic;
      BUS_Dout  : out   std_logic_vector(SSBUS_buswidth-1 downto 0) := (others => '0');
      Din       : in    std_logic_vector(Reg.upper downto Reg.lower);
      Dout      : out   std_logic_vector(Reg.upper downto Reg.lower)
   );
end entity;

architecture arch of eReg_SS is
begin

   -- Phoenix: no savestates; the register is its default value.
   Dout     <= Reg.defval(Reg.upper downto Reg.lower);
   BUS_Dout <= (others => '0');

end architecture;


