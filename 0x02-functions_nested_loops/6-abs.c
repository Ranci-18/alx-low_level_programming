#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_abs - computes absolute integer value
 *@x - holds initial value
 *Return: absolute value
 */

int _abs(int x, int y)
{
	x = -1;
	y = abs(x);

	putchar(y);
	return (y);

}
