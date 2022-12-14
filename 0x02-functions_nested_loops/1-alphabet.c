#include "main.h"
#include <stdio.h>

/**
 *maint - entry point
 *
 *
 *
 *Return: Always 0 (Success)
 */
/*prints the alphabet*/
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
