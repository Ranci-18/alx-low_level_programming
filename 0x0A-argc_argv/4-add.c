#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - performs addition of arguments
 *@argc: number of arguments
 *@argv: argument array
 *
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
