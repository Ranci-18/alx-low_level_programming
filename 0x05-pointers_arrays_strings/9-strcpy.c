#include <stdio.h>

/**
 **_strcpy - copies string using src to dest pointer
 *
 *@dest: destination file
 *@src: source file
 *Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		*(dest + c) = *(src + c);

	}
	return (dest);
}
