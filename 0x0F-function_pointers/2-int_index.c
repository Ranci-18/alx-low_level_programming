#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - finds for an integer
 *@array: array of elements
 *@size: size of array
 *@cmp: function pointer
 *
 *Return: index of first instance of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
