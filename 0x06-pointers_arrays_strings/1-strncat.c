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
	strncat(dest, src, n);
	return (dest);
}
