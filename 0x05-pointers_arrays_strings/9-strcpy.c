#include <stdio.h>

/**
 **_strcpy - copies string using src to dest pointer
 *
 *@dest: dest pointer
 *@src: src pointer
 *Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];

	}
	return (dest);
}
