#include <stdio.h>
/**
 **rot13 - rotates characters 13 times
 *
 *
 *Return: s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		}
	}
	return (s);
}
