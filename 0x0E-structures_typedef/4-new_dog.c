#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to a new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;
	int name_len = 0, owner_len = 0, i;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_name = malloc(name_len + 1);
	new_owner = malloc(owner_len + 1);

	if (!new_name || !new_owner)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];

	dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
