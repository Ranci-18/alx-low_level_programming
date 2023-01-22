#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of argument types
 *
 *
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j, k = 0;
	char *s;
	const char form_t[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (form_t[j])
		{
			if (format[i] == form_t[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), k = 1;
			break;
		case 's':
			s = va_arg(list, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
