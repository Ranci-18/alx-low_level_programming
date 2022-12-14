#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void)
{

	char x = 'a';
	int i = 0;

	while (i <= 10)
		{
		x = 'a';
		while (x <= 'z')
		putchar(x);
		x++;
		}
	i++;
	putchar('\n');
}
