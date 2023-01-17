#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 *init_dog - initializes struct dog
 *@d: struct pointer
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
