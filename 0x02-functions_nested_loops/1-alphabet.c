#include "main.h"
#include <stdio.h>

/**
 *maint - entry point
 *
 *
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)/*prints the alphabet*/

{
	char i = 'a';

	while (i <= 'z')
		{
		putchar(i);
		i++;
		}
	putchar('\n');
}
