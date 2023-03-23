#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 * @i: The number to be checked.
 *
 * Return: Always void.
 */
void positive_or_negative(int i)
{
        int n;

        srand(time(0) + i); /* Seed the random number generator with i */
        n = rand() % 201 - 100; /* Generate a random number between -100 and 100 */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }
}
