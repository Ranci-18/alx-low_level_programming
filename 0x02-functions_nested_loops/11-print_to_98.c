#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints natural numbers from any number given
 *
 *@n: is the first number
 *
 *
 *
 */

void print_to_98(int n)
{
	if (n < 0)
		{
		for (; n < 0; n++)
			{
			printf("%d,\n", n);
			}
		}
	else if (n >= 0)
		{
		for (; n >= 0; n++)
			{
			printf("%d,\n", n);
			}
		}
	else if (n >= 98)
		{
		for (; n >= 98; n--)
			{
			printf("%d,\n", n);
			}
		}


}
