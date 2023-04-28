#include <stdio.h>

/**
 * before_main - Function that runs before the main function
 *
 * Description: This function is executed before the main function and
 *              prints a message to the standard output.
 */

void __attribute__ ((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
