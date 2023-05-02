#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, s + _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s1: the start of the string
 * @s2: the end of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int check_palindrome(char *s1, char *s2)
{
	if (s1 >= s2)
		return (1);

	if (*s1 != *s2)
		return (0);

	return (check_palindrome(s1 + 1, s2 - 1));
}

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
