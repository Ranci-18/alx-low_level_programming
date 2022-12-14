#include "main.h"
#include <stdio.h>

/**
 *print_last_digit - prints last digit of a number
 *@n: holds the number
 *
 *Return: last digit or 0
 */


int print_last_digit(int n)
{
	
	last_digit = n % 10;
	
	if (last_digit > 0)
		{
		return (last_digit);
		}
	else
		{
		return (0);
		}

}
