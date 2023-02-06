#include "main.h"
/**
 *clear_bit - sets bit 0 at given index
 *@n: long int number/ pointer to long int number
 *@index: position to add bit
 *
 *
 *Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	if (*n & mask)
		*n ^= mask;

	return (1);
}
