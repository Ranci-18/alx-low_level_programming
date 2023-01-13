#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory to array
 *@nmemb: number of members of array
 *@size: size of each member
 *Return: pointer to first element of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb * sizeof(int));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		c[i] = 0;
	}

	return (c);
}
