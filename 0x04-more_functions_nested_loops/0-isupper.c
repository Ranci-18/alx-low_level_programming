#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isupper - checks uppercase character
 *
 *@c: holds the character to check
 *
 *Return: 1 is uppercase, 0 if not
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
	else
		{
		return (0);
		}


}
