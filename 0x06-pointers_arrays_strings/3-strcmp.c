#include <stdio.h>
/**
 *_strcmp - compares strings s1 and s2
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: comparison value as integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (; j == 0; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		j = s1[i] - s2[i];
	}
	return (j);
}
