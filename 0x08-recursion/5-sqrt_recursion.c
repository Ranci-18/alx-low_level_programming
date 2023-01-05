#include <stdio.h>
/**
 *power_op - returns square-root
 *@x: base
 *@i: power
 *Return: square-root, -1 if no natural square-root
 */
int power_op(int x, int i)
{
	if (i % (x / i) == 0)
	{
		if (i * (x / i) == x)
			return (i);
		else
			return (-1);
	}
	return (power_op(x, i + 1));
}

/**
 *_sqrt_recursion - returns square-root
 *@n: number to compute
 *
 *
 *Return: square-root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_op(n, 2));
}
