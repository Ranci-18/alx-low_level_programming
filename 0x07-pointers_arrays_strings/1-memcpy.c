#include <stdio.h>
/**
 *_memcpy - copies n bytes of src memory area to dest
 *@dest: destination memory area
 *@src: source memory area
 *@n: bytes to copy
 *Return: final dest mem area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
