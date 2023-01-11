#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees memory of 2D array
 *@grid: 2D array
 *@height: number of rows
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
