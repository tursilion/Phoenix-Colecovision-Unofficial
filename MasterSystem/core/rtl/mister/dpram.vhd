-- Phoenix: a portable dual-port RAM in place of the MiSTer core's
-- altsyncram one (same ports; reads are registered, a port writing an
-- address reads the new data, as NEW_DATA_NO_NBE_READ).  XST makes block RAM of it.

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity dpram is
	generic
	(
		init_file     : string := " ";
		widthad_a     : natural;
		width_a       : natural := 8;
		outdata_reg_a : string := "UNREGISTERED";
		outdata_reg_b : string := "UNREGISTERED"
	);
	port
	(
		address_a : in  std_logic_vector(widthad_a-1 downto 0);
		address_b : in  std_logic_vector(widthad_a-1 downto 0);
		clock_a   : in  std_logic;
		clock_b   : in  std_logic;
		data_a    : in  std_logic_vector(width_a-1 downto 0);
		data_b    : in  std_logic_vector(width_a-1 downto 0);
		wren_a    : in  std_logic := '1';
		wren_b    : in  std_logic := '1';
		q_a       : out std_logic_vector(width_a-1 downto 0);
		q_b       : out std_logic_vector(width_a-1 downto 0)
	);
end dpram;

architecture rtl of dpram is
	type mem_t is array(0 to 2**widthad_a-1) of std_logic_vector(width_a-1 downto 0);
	shared variable mem : mem_t;
begin
	process (clock_a)
	begin
		if rising_edge(clock_a) then
			if wren_a = '1' then
				mem(to_integer(unsigned(address_a))) := data_a;
				q_a <= data_a;
			else
				q_a <= mem(to_integer(unsigned(address_a)));
			end if;
		end if;
	end process;

	process (clock_b)
	begin
		if rising_edge(clock_b) then
			if wren_b = '1' then
				mem(to_integer(unsigned(address_b))) := data_b;
				q_b <= data_b;
			else
				q_b <= mem(to_integer(unsigned(address_b)));
			end if;
		end if;
	end process;
end rtl;
