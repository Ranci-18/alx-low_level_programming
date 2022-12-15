#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints a triangle
 *
 *@size: is the size of the triangle
 *
 *
 */

void print_triangle(int size)
{
	int m;

	for (m = 0; m < size; m++)
		{
		int n;

		for (n = 1; n < (size - m); n++)
			_putchar(' ');
		for (n--; n < size; n++)
			_putchar(35);
		if (m < (size - 1))
			_putchar('\n');
		}
	_putchar('\n');


}
