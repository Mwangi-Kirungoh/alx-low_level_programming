#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to be searched
* @accept: pointer to the string of accepted characters
* Return: the number of bytes in the initial segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
int found = 0;
char *a = accept;

while (*a != '\0')
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}

if (found == 0)
{
return count;
}

s++;
}

return count;
}
