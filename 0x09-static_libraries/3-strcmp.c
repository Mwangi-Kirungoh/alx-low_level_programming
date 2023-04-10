/**
 * _strcmp - compares the values of two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if the two strings are equal,
 * negative if s1 is less than s2, positive if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
