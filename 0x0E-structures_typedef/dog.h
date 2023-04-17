#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog data
 * @name: Name of the dog (pointer to char)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (pointer to char)
 *
 * Description: Contains data about a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
