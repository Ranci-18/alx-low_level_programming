#include <stdio.h>
#include <stdlib.h>
/**
 *main - peforms multiplication
 *@argc: argument count
 *@argv: list of arguments
 *
 *Return: 0 when product is computed, 1 when no arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
