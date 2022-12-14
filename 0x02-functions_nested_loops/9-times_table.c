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
			int o = m * n;

			if (o <= 9 && n != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
				}
			else if (o > 10)
				{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
                                _putchar((o % 10) + '0');

				}

			}
		_putchar('\n');
		}


}
