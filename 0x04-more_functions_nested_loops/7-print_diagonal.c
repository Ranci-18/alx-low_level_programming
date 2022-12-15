#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - prints a diagonal line
 *
 *@n: holds value of how many times to print
 *
 *Return: no return
 */

void print_diagonal(int n)
{
	int k;

	for (k = 0; k < n; k++)
		{
		int l;

		for (l = 0; l < k; l++)
			{
			_putchar(' ');
			}
	_putchar(92);
	_putchar('\n');
		}
	_putchar('\n');

}
