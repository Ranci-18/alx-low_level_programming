#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */


int main(void)
{
	char _alphabet, _Alphabet;

	for (_alphabet = 'a'; _alphabet <= 'z'; _alphabet++)
		putchar(_alphabet);
	for(_Alphabet = 'A'; _Alphabet <= 'Z'; _Alphabet++)
		putchar(_Alphabet);
	putchar('\n');
	return (0);

}
