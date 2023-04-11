#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments passed to it
* @argc: the number of arguments passed to the program
* @argv: an array containing the program command line arguments
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;

/* suppress unused parameter warning */
(void)argv;

/* print the number of arguments */
printf("%d\n", argc - 1);

return (0);
}
