#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to clear the bit in.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1); /* Error: Index is out of range */

	*n &= ~(1UL << index); /* Clear the bit at the given index to 0 */

	return (1);
}
