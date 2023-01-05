#include <stdio.h>
/**
 *factorial - returns the factorial of n
 *@n: represents any num
 *
 *
 *Return: -1 for n less than 0, 1 for n equal to 0,
 *and factorial of n if n is greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
