#include <stdio.h>

/**
 *main - entry point
 *code prints a combination of three numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
		for (j = i + 1; j <= 8; j++)
			for (k = j + 1; k <= 9; k++)
				{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (i != 7)
						{
						putchar(',');
						putchar(' ');
						}
				}
	putchar('\n');
	return (0);

}
