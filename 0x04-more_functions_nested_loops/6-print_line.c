#include "main.h"
#include <stdio.h>

/**
 *print_line - prints a straight line
 *
 *@n: holds the number of times to print
 *
 *
 */

void print_line(int n)
{
	int k;

	if (n > 0)
		{
		for (k = 0; k < n; k++)
		_putchar('_');
		}
	_putchar('\n');

	if (n <= 0)
		{
		_putchar('\n');
		}


}
