#include <stdio.h>

/**
 **_strncpy - function copies src string to dest string up to nth character
 *
 *@dest: destination string
 *@src: source string
 *@n: copy limit
 *
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	dest[x] = '\0';
	return (dest);
}
