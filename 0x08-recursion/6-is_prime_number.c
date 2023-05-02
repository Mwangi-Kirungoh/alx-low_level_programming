#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number.
 * @n: integer to be checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checks if an integer is a prime number helper function.
 * @n: integer to be checked.
 * @i: counter.
 *
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
