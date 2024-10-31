unsigned char	reverse_bits(unsigned char octet)
{
	return ((octet >> 4) | ( octet << 4));
}

#include <stdio.h>
int main()
{
    printf("%d", reverse_bits(5));
}