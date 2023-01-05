#include <stdio.h>
#include <string.h>
/**/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (strlen(s));
}
