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
	int i;
	int j;
	int length;
	int half_length;
	int n;

	length = strlen(str);
	half_length = strlen(str) / 2;
	for (i = half_length; i < length; i++)
	{
	
		putchar(str[i]);
	}
	n = (length - 1) / 2;
	j = 0;
	if (n % 2 == 1 && j > half_length)
	{
		for (j = length - n - 1; j < length - 1; j++)
		putchar(str[j]);
	}

	putchar('\n');
}
