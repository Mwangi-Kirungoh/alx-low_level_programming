#include "main.h"

/**
 * _realloc - Reallocate memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the reallocated memory block, NULL if memory allocation
 * fails or new_size is zero.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}
