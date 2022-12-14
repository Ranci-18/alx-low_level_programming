#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_islower - checks for a lowercase character
 *
 *c - holds character value
 *Returns: 1 if lower or otherwise 0
 */

int _islower(int c)
{
	if (islower(c))
		{
		_putchar(c);
		return 1;
		}
	else
		{
		return 0;
		}
}
