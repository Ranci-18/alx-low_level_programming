#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: destination string
 *@s2: source string
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_string;
	int i;
	int j;
	int k;
	int end_of_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	cat_string = malloc(sizeof(char) * (i + j + 1));
	if (cat_string == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		cat_string[k] = s1[k];

	end_of_s2 = j;
	for (j = 0; j < end_of_s2; j++, k++)
		cat_string[k] = s2[j];
	return (cat_string);
}
