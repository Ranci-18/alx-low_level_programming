#include "main.h"
/**
 *flip_bits - returns the number of bits it takes to get to the next number
 *@n: first number
 *@m: next number
 *
 *Return: number of bits traversed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);

}
