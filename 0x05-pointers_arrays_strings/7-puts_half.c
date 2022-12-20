#include <stdio.h>
#include <string.h>

/**
 *puts_half - prints half the characters and otherwise prints
 *last n numbers if numbers are odd
 *
 *@str: pointer to the string
 *
 */
void puts_half(char *str)
{
	int n;
	int o;

	for (n = 0; str[n] != '\0'; n++)
		if (n % 2 == 1)
			o = (n - 1) / 2;
		else
			o = n / 2;
	for (o++; o < n; o++)
		putchar(str[o]);
	putchar('\n');
}
