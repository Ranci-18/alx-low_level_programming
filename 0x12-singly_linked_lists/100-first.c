#include <stdio.h>
#include "lists.h"
/**
 *print_string - prints string before main is executed
 *
 *
 *
 *Return: nothing
 */
void __attribute__((constructor)) print_string()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
