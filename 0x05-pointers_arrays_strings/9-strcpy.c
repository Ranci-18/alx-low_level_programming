#include <stdio.h>
#include <string.h>

/**
 **_strcpy - copies string using src to dest pointer
 *
 *@dest: destination file
 *@src: source file
 *Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
