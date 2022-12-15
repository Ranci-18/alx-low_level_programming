#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - prints numbers 0-9, except 2 & 4
 *
 *
 *
 *
 */

void print_most_numbers(void)
{
	int k;

	for (k = 48; k <= 58; k++)
		{
		if (k != 50 && k != 52)
			{
			_putchar(k);
			}
		}
	_putchar('\n');

}
