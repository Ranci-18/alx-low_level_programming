#include <stdio.h>
#include <string.h>

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
	int length;

	length = strlen(str);
	k = 0;
	while (k < length)
	{
		putchar(str[k]);
		k = k + 2;
	}
	putchar('\n');
}
