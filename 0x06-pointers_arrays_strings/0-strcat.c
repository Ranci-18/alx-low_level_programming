#include <stdio.h>
#include <string.h>

/**
 **_strcat - function concatenates src string to dest string
 *
 *@dest: destination string
 *@src: source string
 *Return: dest string concatenated with src string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
