#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search through
 * @size: the size of the array
 * @cmp: the function pointer to compare values
 *
 * Return: index of the first element for which cmp function returns true
 *         or -1 if no element returns true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
        int i;

        if (array != NULL && cmp != NULL)
        {
                for (i = 0; i < size; i++)
                {
                        if (cmp(array[i]))
                        {
                                return (i);
                        }
                }
        }

        return (-1);
}
