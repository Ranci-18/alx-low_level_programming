#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates array of integers
 *@min: minimum integer
 *@max: maximum integer
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
