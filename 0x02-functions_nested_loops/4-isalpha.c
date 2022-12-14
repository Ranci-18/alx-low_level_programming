#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha -checks alphabetic character
 *@c: holds character
 *Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{
	if (isalpha(c))
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
