#include "main.h"
#include <stdio.h>

/**
 *times_table - prints 9 times table
 *
 *
 *
 */

void times_table(void)
{
	int m;

	for (m = 0; m <= 9; m++)
		{
		int n;

		for (n = 0; n <= 9; n++)
			{
			if (m *n <= 9)
				{
				_putchar(m * n + '0');
				_putchar(',');
				_putchar(' ');
				}
			else 
				{
				_putchar(m * n + '0');
				_putchar((m * n / 10) + '0');
				_putchar((m * n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}


}
