#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */


int main(void)
{

	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'A'; c <= 'F'; c++)
		putchar(c);
	putchar('\n');
	return (0);



}
