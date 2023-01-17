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

	if (!(d->age) || !(d->owner))
		printf("(nil)\n");

	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
