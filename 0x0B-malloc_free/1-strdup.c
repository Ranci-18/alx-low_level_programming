#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns pointer to newly allocated mem-space
 *@str: string to be copied
 *
 *Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int bytes;

	if (str == NULL)
	{
		return (NULL);
	}

	bytes = strlen(str) + 1;
	s = malloc(bytes);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= bytes; i++)
		s[i] = str[i];
	return (s);
}
