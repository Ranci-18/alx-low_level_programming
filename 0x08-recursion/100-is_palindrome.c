#include <stdio.h>
#include <string.h>
/**
 *string_length - finds length of s
 *@s: string
 *Return: length of s
 */
int string_length(char *s)
{
	return (strlen(s));
}

/**
 *comparator - compares characters in string
 *@s: string
 *@i1: front counter
 *@i2: back counter
 *Return: 1 if s is palindrome, 0 if not
 */
int comparator(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);

		return (comparator(s, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 *is_palindrome - checks if s is a palindrome
 *@s: string
 *
 *Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (comparator(s, 0, string_length(s) - 1));
}
