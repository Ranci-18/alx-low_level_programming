#include "main.h"
#include <stdio.h>

/**
 *maint - entry point
 *
 *function prints alphabet
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		{
		putchar(i);
		i++;
		}
	putchar('\n');
}
