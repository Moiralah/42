# include <unistd.h>
# include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	char	c = 0;
	int		bit = 0;
	int 	oct;

	while (bit < 8)
	{
		oct = 0;
		oct = (octet >> bit) & 1;
		if (oct == 1)
			c = c + (1 << (7 - bit));
		bit++;
	}
	return (c);
}

void print_bits(unsigned char octet)
{
	char c;
	int bit = 7;

	while(bit >= 0)
	{
		c = ((octet >> bit) & 1) + '0';
		write (1, &c, 1);
		bit--;
	}
}

int main(void)
{
	unsigned char octet;

	octet = 11;
	print_bits(octet);
	printf("\n");
	print_bits(reverse_bits(octet));
}

