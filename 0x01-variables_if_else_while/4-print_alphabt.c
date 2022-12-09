#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char _alphabet;

	for (_alphabet = 'a'; _alphabet <= 'z'; _alphabet++)
	{
		if (_alphabet != 'q' && _alphabet != 'e')
			putchar(_alphabet);
	
	}
	putchar('\n');
	return (0);



}
