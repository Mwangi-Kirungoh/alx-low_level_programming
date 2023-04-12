#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: the string to duplicate
*
* Return: a pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *dup_str;
unsigned int len, i;

if (str == NULL)
return (NULL);

/* Get the length of the string */
for (len = 0; str[len] != '\0'; len++)
;

/* Allocate memory for the duplicate string */
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);

/* Copy the string into the new memory */
for (i = 0; i <= len; i++)
dup_str[i] = str[i];

return (dup_str);
}
