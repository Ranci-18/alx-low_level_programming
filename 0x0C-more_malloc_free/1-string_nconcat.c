#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: bytes
 *
 *Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i1;
	unsigned int i2;
	unsigned int k;
	unsigned int str_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
	}
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
	}

	if (n > i2)
		n = i2;
	str_len = strlen(s1) + n + 1;
	str = malloc(str_len);
	if (str == NULL)
		return (NULL);

	for (k = 0; k < str_len; k++)
		if (k < i1)
			str[k] = s1[k];
		else
			str[k] = s2[k - i1];
	str[k] = '\0';

	return (str);
}
