#include "search_algos.h"
/**
 *linear_search - sequentially searches value in an array
 *@array: pointer
 *@size: size of array
 *@value: value to search for
 *
 *Return: -1 when array is null or failed to find value
 *	 index when value if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
