#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory and returns pointer
 *@b: memory size to allocate
 *
 *
 *Return: pointer to first byte of memory
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
