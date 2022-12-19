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

	while (c >= 0)
	{
		dest[c] = src[c];
		if (src[c] == '\0')
		{
			break;
		}
		c++;
	}
	return (dest);
}
