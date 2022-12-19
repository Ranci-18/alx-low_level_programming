#include <stdio.h>
#include <string.h>

/**
 *rev_string - reverses string
 *
 *@s: points to the string to reverse
 *
 *
 */
void rev_string(char *s)
{
	int i;
	int halfway;

	halfway = strlen(s) / 2;

	for (i = 0; i < halfway; i++)
	{
		char c;

		c = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = c;

	}
}
