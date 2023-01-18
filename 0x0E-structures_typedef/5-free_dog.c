#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees memory for dog_t
 *@d: dog_t
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
