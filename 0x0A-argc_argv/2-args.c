#include <stdio.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: argument array
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
