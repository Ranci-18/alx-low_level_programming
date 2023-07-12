#include "search_algos.h"
/**
 *linear_srch - searches for a number sequentially
 *@array: array pointer
 *@prev: initial index
 *@size: size of array
 *@value: value to search for
 *Return: index of number
 */
int linear_srch(int *array, int prev, size_t size, int value)
{
	int i = 0;

	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	for (i = prev; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, i);
			return (i);
		}
	}
	return (-1);
}

/**
 *jump_search - searches for value in a sorted array
 *@array: the array to search in
 *@size: size of array
 *@value: number to search for
 *
 *
 *Return: index of value or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int prev = 0;
	int next;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		next = prev + jump;
		if (next >= (int)size)
			next = (int)size - 1;

		if (array[next] >= value)
			break;

		prev += jump;

		if (prev >= (int)size)
			return (-1);
	}
	return (linear_srch(array, prev, size, value));
}
