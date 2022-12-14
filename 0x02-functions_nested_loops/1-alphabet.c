#include <stdio.h>

/**
 *main - entry point
 *function prints alphabet
 *Return: Always 0 (Success)
 */


void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char i = 'a';

	while (i < 'z')
		{
		putchar(i);
		i++;
		}
}
