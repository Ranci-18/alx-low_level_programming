#include <stdio.h>
/**
 **string_toupper - changes lowercase characters to uppercase
 *
 *@str: string
 *
 *
 *
 *Return: str after conversion
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	return (str);
}
