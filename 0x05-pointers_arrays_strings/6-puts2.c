#include <stdio.h>

/**
 *puts2 - prints every other character in a string
 *
 *@str: points to the string
 *
 *
 */
void puts2(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		putchar(str[k]);
		k = k + 2;
	}
	putchar('\n');
}
