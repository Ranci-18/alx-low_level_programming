#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns sum of given parameters
 *@n: number of parameters
 *
 *Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	
	if (n == 0)
		return (0);

	va_start(numbers, n);

	int i, sum_of_all = 0;

	for (i = 0; i < n; i++)
	{
		sum_of_all += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum_of_all);
}
