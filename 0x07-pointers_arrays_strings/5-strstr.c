#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring
* @haystack: pointer to the string to be searched
* @needle: pointer to the substring to be found
*
* Return: pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}

return (NULL);
}
