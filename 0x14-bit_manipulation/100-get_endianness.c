#include "main.h"
/**
 *get_endianness - finds the endianness and returns 1 or 0
 *
 *
 *Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *) &num;

	return ((int)*c);
}
