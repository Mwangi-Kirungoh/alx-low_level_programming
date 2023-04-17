#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to dog structure
 * @name: Pointer to name string
 * @age: Age of the dog
 * @owner: Pointer to owner string
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
