#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: string to print between strings
 *@n: number of strings
 *
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
