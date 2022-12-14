#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_islower - checks for a lowercase character
 *
 */

int _islower(int c)
{
	if (islower(c))
		{
		putchar(c);
		return (1);
		
		}
	else
		{
		return (0);
		}
}
