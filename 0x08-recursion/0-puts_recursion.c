#include <stdio.h>
/**
 *_puts_recursion - prints string followed by new line
 *@s: string to output
 *
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		putchar(s[i]);
	i++;
	}
	putchar('\n');
}
