#include "main.h"

/**
 * is_prime_number - Check if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	int i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
