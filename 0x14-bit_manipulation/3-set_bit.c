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
	unsigned int i;
	unsigned mask;

	if (n == 0 && index < 63)
	{
		return (-1);
	}
	for (i = 0; i <= 63; *n >>= 1, i++)
	{
		if (index == i)
		{
			mask = 1 << index;
			*n = (*n | mask);
			return (1);
		}
	}
	return (-1);
}
