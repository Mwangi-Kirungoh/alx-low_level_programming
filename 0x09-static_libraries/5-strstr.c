#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: pointer to the string to search through
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the substring within the string,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
