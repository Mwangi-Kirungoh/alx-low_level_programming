/**
 * wildcmp - compares two strings, allowing for wildcard character *
 * @s1: first string to compare
 * @s2: second string to compare, which may contain wildcard *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If wildcard character * is found, recursively match */
	if (*s2 == '*')
	{
		/* Skip multiple * in s2 */
		while (*(s2 + 1) == '*')
			s2++;

		/* If * is at the end of s2, it matches any remaining characters in s1 */
		if (*(s2 + 1) == '\0')
			return (wildcmp(s1, s2 + 1));

		/* Match s1 with the string after * in s2 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		/* Match s1 with the next character after * in s2 */
		return (wildcmp(s1, s2 + 1));
	}

	/* If both characters match or * is not found, continue matching */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If characters do not match, the strings do not match */
	return (0);
}
