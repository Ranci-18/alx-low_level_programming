#include <stdio.h>
/**
 *is_prime_digit - checks for prime numbers
 *@x: number to test
 *@i: counter
 *Return: prime number or 0 if not
 */
int is_prime_digit(int x, int i)
{
	if (x % i == 0)
	{
		if (x == i)
			return (1);

		else
			return (0);
	}
	return (is_prime_digit(x, i + 1));
}

/**
 *is_prime_number - checks for prime numbers
 *@n: number to test
 *Return: prime number or 0
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	return (is_prime_digit(n, 2));

}
