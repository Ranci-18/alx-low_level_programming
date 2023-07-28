#include <stdio.h>
/**
 *main - entry point
 *
 *Return: nothing
 */
int main(void)
{
	int i, j, first_dig_i, first_dig_j, second_dig_i, second_dig_j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			first_dig_i = i / 10;
			second_dig_i = i % 10;
			first_dig_j = j / 10;
			second_dig_j = j % 10;

			if (i <= j)
			{
				putchar(first_dig_i + '0');
				putchar(second_dig_i + '0');
				putchar(' ');

				putchar(first_dig_j + '0');
				putchar(second_dig_j + '0');

				if (i < 99 || j < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
