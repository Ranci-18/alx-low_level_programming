#include <stdio.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: argument array
 *Return: nothing
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
