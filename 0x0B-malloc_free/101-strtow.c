#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
    int flag, c, w;

    flag = 0;
    w = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
    }

    return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    char **matrix;
    int words, letters, w, l, i;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = count_word(str);
    if (words == 0)
        return (NULL);

    matrix = malloc(sizeof(char *) * (words + 1));
    if (matrix == NULL)
        return (NULL);

    w = 0;
    for (i = 0; i < words; i++)
    {
        letters = 0;
        while (str[w] == ' ')
            w++;
        while (str[w] != ' ' && str[w] != '\0')
        {
            letters++;
            w++;
        }
        matrix[i] = malloc(sizeof(char) * (letters + 1));
        if (matrix[i] == NULL)
        {
            for (i--; i >= 0; i--)
                free(matrix[i]);
            free(matrix);
            return (NULL);
        }
        l = 0;
        while (l < letters)
        {
            matrix[i][l] = str[w - letters + l];
            l++;
        }
        matrix[i][l] = '\0';
    }
    matrix[i] = NULL;

    return (matrix);
}
