#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - creates new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: ownerof new dog
 *Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *some_dog;
	int i, iname, iowner;

	some_dog = malloc(sizeof(dog_t));
	if (some_dog == NULL || !name || !owner)
	{
		free(some_dog);
		return (NULL);
	}

	iname = strlen(name);
	some_dog->name = malloc(iname + 1);
	iowner = strlen(owner);
	some_dog->owner = malloc(iowner + 1);

	if (!(some_dog->name) || !(some_dog->owner))
	{
		free(some_dog->name);
		free(some_dog->owner);
		free(some_dog);
		return (NULL);
	}

	for (i = 0; i < iname; i++)
		some_dog->name[i] = name[i];
	some_dog->name[i] = '\0';

	some_dog->age = age;

	for (i = 0; i < iowner; i++)
		some_dog->owner[i] = owner[i];
	some_dog->owner[i] = '\0';

	return (some_dog);
}
