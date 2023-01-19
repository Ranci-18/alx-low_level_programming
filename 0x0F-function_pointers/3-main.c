#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 *main - prints results of an operation
 *@argc: number of arguments passed
 *@argv: array argument
 *
 *Return: always nothing
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
