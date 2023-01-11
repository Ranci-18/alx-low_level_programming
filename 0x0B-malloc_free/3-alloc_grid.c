#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns pointer to 2d array
 *@width: width parameter
 *@height: height parameter
 *
 *Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr_2d;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc(sizeof(int *) * height);
	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(sizeof(int) * width);
		if (arr_2d[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr_2d[i]);
			free(arr_2d);
			return (NULL);
		}
	}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				arr_2d[i][j] = 0;

	return (arr_2d);
}
