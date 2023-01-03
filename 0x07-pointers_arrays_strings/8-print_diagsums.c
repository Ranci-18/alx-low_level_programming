#include <stdio.h>
/**
 *print_diagsums - prints sum of diagonals
 *@a: array
 *@size: size of array
 *
 *Return: null
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_primary_diagonal;
	int sum_secondary_diagonal;

	sum_primary_diagonal = 0;
	sum_secondary_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		sum_primary_diagonal += a[i * size + i];
		sum_secondary_diagonal += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_primary_diagonal, sum_secondary_diagonal);
}
