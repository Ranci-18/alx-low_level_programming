#include <stdio.h>
/**
 *_strpbrk - searches for a occurence of any byte
 *@s: string to search
 *@accept: character set to search for
 *
 *Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	return (NULL);
}
