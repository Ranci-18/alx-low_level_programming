#include <stdio.h>
/**
 *_memset- sets first n bytes of s with 'b'
 *
 *@s: source string
 *@b: character to set
 *@n: bytes to set
 *
 *Return: set string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;


	return (s);
}
