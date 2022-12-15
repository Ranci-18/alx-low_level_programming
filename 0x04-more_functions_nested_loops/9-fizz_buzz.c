#include <stdio.h>

/**
 *main - prints numbers between 1 and 100,
 *and substitutes words for multiples of 3 and 5
 *
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 2; x <= 100; x++)
		{
		if ((x % 3 != 0) && (x % 5 != 0))
			{
			printf(" %d", x);
			}
		if (x % 3 == 0)
			{
			printf(" Fizz");
			}
		if (x % 5 == 0)
			{
			printf(" Buzz");
			}
		if ((x % 3 == 0) && (x % 5 == 0))
			{
			printf(" FizzBuzz");
			}
		}
	printf("\n");
	return (0);

}
