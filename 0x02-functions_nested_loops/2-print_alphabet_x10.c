#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *
 *
 */

void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
		{
		char x = 'a';

		while (x <= 'z')
			{
			putchar(x);
			x++;
			}
	putchar('\n');
	i++;
		}
}
