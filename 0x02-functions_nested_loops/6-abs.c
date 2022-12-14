#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_abs - computes absolute integer value
 *@x: holds initial value
 *
 *Return: absolute value
 */

int _abs(int x)
{
	if (x >= 0)
		{
		return (x);
		}

	else
		{
		return (-x);
		}

}
