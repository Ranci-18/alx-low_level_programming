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

	for (i = strlen(s); i >= 0; i--)
		putchar(s[i]);
}
