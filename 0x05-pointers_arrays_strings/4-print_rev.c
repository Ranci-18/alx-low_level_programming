#include <stdio.h>
#include <string.h>

/**
 *print_rev - reverses string
 *
 *@s: pointer to string
 *
 */
void print_rev(char *s)
{
	int i;


	for (i = strlen(s); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
