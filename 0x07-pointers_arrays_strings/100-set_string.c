#include <stdio.h>
/**
 *set_string - sets value to pointer
 *@s: destination pointer
 *@to: source pointer
 *Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
