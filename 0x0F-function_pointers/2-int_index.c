#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the cmp
 * function does not return 0
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: function to use for comparison
 * Return: index of the first element for which cmp doesn't return 0
 * or -1 if no elements match or size <= 0
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
