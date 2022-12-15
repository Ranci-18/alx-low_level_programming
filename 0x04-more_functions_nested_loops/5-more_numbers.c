#include "main.h"
#include <stdio.h>

/**
 *more_numbers - prints 14 numbers 10 times
 *
 *
 *
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		{
		int j;

		for (j = 0; j <= 14; j++)
			{
			_putchar(j);
			}
		_putchar('\n');
		}
	_putchar('\n');

}
