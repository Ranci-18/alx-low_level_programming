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
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");

		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("(nil)\n");

		printf("Owner: %s\n", d->owner);
	}
}
