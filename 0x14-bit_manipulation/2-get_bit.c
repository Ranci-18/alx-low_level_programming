#include "main.h"
/**
 *get_bit - returns value of a bit at a given index
 *@n: number
 *@index: position of bit
 *Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	int result = n & mask;

	if (index == 0)
	{
		return (n & 1);
	}
	if (index > 64)
	{
		return (0);
	}
	if (n >> 0 && index)
	{
		if (result)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
