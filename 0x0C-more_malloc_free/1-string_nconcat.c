#include <stdlib.h> /* for malloc */
#include <string.h> /* for strlen */
#include "main.h"   /* for function prototype */

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
