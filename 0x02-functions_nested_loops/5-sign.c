#include "main.h"
#include <stdio.h>

/**
 *print_sign - prints sign of a number
 *@n: holds value to be tested
 *Return: 1 is positive, otherwise 0 for negative
 */

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
	else
		{
		_putchar('0');
		return (0);
		}
}
