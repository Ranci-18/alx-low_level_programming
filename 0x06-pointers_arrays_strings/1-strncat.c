#include <stdio.h>
#include <string.h>

/**
 **_strncat - function concatenates src string to dest string upto nth character
 *
 *@dest: destination string 
 *@src: source string
 *@n: variable limiting concatenation up to nth byte
 *Return: dest string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
