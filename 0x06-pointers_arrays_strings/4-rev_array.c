#include <stdio.h>
/**
 *reverse_array - reverses array elements
 *
 *@a: array pointer
 *@n: nth element/last element
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
