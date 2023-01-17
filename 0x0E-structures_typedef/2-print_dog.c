#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints struct dog
 *@d: struct dog
 *
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");

		printf("Name: %s\n", d->name);

		if (!(d->owner) || !(d->age))
			printf("(nil)\n");

		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
