#include <stdio.h>
#include <string.h>
/**
 *_strlen_recursion - returns string length
 *@s: string
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (strlen(s));
}
