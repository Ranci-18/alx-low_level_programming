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
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
			break;
		j++;
		i++;
	}
	return (dest);
}
