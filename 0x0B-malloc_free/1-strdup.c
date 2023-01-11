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

	bytes = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc((sizeof(str) * bytes) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < bytes; i++)
		s[i] = str[i];
	return (s);
}
