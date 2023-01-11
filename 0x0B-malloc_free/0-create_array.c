#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates array s
 *@size: size of array
 *@c: elements of array
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(c) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
