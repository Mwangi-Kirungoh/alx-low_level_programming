#include <stdlib.h>
#include <stdio.h>

/**
 * print_number - prints an array of integers as a number
 * @number: the number to be printed
 * @size: size of the number array
 */
void print_number(int *number, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d", number[i]);
    }
    printf("\n");
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to the result, or NULL on failure
 */
int *multiply(int *num1, int len1, int *num2, int len2)
{
    int *result;
    int i, j, carry, r, size;

    if (num1 == NULL || num2 == NULL || len1 <= 0 || len2 <= 0)
        return (NULL);

    size = len1 + len2;
    result = calloc(size, sizeof(*result));
    if (result == NULL)
        return (NULL);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            r = num1[i] * num2[j] + carry + result[i + j + 1];
            result[i + j + 1] = r % 10;
            carry = r / 10;
        }
        if (carry)
            result[i + j + 1] = carry;
    }

    while (*result == 0 && size > 1)
    {
        result++;
        size--;
    }

    return (result);
}

/**
 * main - entry point for the program
 *
 * Return: always 0
 */
int main(void)
{
    int *num1, *num2, *result;
    int len1, len2, i;

    num1 = malloc(10 * sizeof(*num1));
    num2 = malloc(10 * sizeof(*num2));

    if (num1 == NULL || num2 == NULL)
        return (1);

    len1 = 4;
    num1[0] = 9;
    num1[1] = 8;
    num1[2] = 7;
    num1[3] = 6;

    len2 = 3;
    num2[0] = 5;
    num2[1] = 4;
    num2[2] = 3;

    result = multiply(num1, len1, num2, len2);

    if (result == NULL)
        return (1);

    print_number(result, len1 + len2);

    free(num1);
    free(num2);
    free(result);

    return (0);
}
