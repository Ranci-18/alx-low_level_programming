#include <stdio.h>

/**
 *main - entry point
 *
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
		{
		if ((x % 3 != 0) && (x % 5 != 0))
			{
			printf("%d ", x);
			}
		if (x % 3 == 0)
			{
			printf("Fizz ");
			}
		if (x % 5 == 0)
			{
			printf("Buzz ");
			}
		if ((x % 3 == 0) && (x % 5 == 0))
			{
			printf("FizzBuzz ");
			}
		}
	printf("\n");
		return (0);

}
