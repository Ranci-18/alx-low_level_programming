#include <stdio.h>
#include <string.h>
/**
 **_strncat - concatenates src string to dest string upto nth character
 *
 *@dest: destination string
 *@src: source string
 *@n: variable limiting concatenation up to nth byte
 *Return: dest string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length;

	dest_length = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
