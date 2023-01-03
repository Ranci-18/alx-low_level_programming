#include <stdio.h>
/**
 *_strspn - calculates length of prefix substring accept
 *@s: target string
 *@accept: specified character set
 *
 *Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}
