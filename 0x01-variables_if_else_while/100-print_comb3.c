#include <stdio.h>

/**
 *main - Entry point
 *code prints combinations of two numbers without repetition
 *Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
		for (n = 0; n < 10; n++)
		{
			if (m != n && m < n)
			{
			putchar(m + '0');
			putchar(n + '0');
			if (m != 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}

	putchar('\n');
	return (0);




}
