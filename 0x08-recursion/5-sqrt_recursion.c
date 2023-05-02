#include "main.h"

/**
 * _sqrt_recursion_helper - calculates the natural square root of a number
 * @n: number to calculate the square root of
 * @i: the current divisor
 *
 * Return: the natural square root of the number n or -1 if n does not have
 *         a natural square root
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root of the number n or -1 if n does not have
 *         a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_recursion_helper(n, 1));
}
