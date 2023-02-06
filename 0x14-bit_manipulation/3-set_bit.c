#include "main.h"
/**
 *set_bit - sets bit at index to 1
 *@n: number
 *@index: position to set bit
 *
 *
 *Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}
