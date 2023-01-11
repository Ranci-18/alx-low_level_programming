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
	/*int j;*/
	int bytes;

	bytes = (strlen(str) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*for (j = 0; str[j] != '\0'; j++)
		;*/
	s = malloc(bytes);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < bytes; i++)
		s[i] = str[i];
	return (s);
}
