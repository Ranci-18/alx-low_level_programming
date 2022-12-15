#include "main.h"
#include <stdio.h>

/**
 *print_square - prints a square
 *
 *@size: is the size of the square
 *
 */

void print_square(int size)
{
	int k;

	for (k = 0; k < size; k++)
		{
		int l;

		for (l = 0; l < size; l++)
			{
			_putchar(35);
			}
		_putchar('\n');
		if (k != size)
			_putchar('\n');
		}

}
