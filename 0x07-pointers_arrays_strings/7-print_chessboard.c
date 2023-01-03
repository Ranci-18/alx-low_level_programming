#include <stdio.h>
/**
 *print_chessboard - prints chessboard
 *@a: array of 8 elements
 *
 *
 *Return: null
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
	putchar('\n');
	}
}
