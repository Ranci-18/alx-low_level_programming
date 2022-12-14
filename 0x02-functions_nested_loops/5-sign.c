#include "main.h"
#include <stdio.h>

/**
 *print_sign - prints sign of a number
 *
 *Return: 1 is positive, otherwise 0 for negative
 */

int print_sign(int n)
{
	if (n > 0)
		{
		return ('+'1);
		}
	else if (n < 0)
		{
		return ('-'0);
		}
	else
		{
		return ('0'0);
		}
}
