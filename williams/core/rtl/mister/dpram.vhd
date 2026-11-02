-- Phoenix: a portable dual-port RAM in place of the MiSTer core's dpram.vhd
-- (same ports).  XST makes block RAM of it.
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity dpram is
	generic (dWidth : integer := 8; aWidth : integer := 10);
	port (
		clk_a  : in  std_logic;
		we_a   : in  std_logic := '0';
		addr_a : in  std_logic_vector((aWidth-1) downto 0);
		d_a    : in  std_logic_vector((dWidth-1) downto 0) := (others => '0');
		q_a    : out std_logic_vector((dWidth-1) downto 0);
		clk_b  : in  std_logic;
		we_b   : in  std_logic := '0';
		addr_b : in  std_logic_vector((aWidth-1) downto 0);
		d_b    : in  std_logic_vector((dWidth-1) downto 0) := (others => '0');
		q_b    : out std_logic_vector((dWidth-1) downto 0));
end entity;

architecture rtl of dpram is
	type mem_t is array(0 to 2**aWidth-1) of std_logic_vector(dWidth-1 downto 0);
	shared variable mem : mem_t;
begin
	process (clk_a) begin
		if rising_edge(clk_a) then
			if we_a = '1' then
				mem(to_integer(unsigned(addr_a))) := d_a;
			end if;
			q_a <= mem(to_integer(unsigned(addr_a)));
		end if;
	end process;

	process (clk_b) begin
		if rising_edge(clk_b) then
			if we_b = '1' then
				mem(to_integer(unsigned(addr_b))) := d_b;
			end if;
			q_b <= mem(to_integer(unsigned(addr_b)));
		end if;
	end process;
end rtl;
