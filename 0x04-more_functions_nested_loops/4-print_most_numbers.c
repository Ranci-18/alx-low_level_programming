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

	for (k = 0; k <= 9; k++)
		{
		if (k != 2 && k != 4)
			{
			_putchar(k);
			}
		}
	_putchar('\n');
	return (0);

}
