#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isdigit - checks is 'c' is a digit
 *
 *
 *
 *Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
		{
		return (1);
		}
	else
		{
		return (0);
		}

}
