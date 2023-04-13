#include <stdlib.h> /* for malloc and exit */
#include "main.h"   /* for function prototype */

/**
 * malloc_checked - allocate memory and check if allocation is successful
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
