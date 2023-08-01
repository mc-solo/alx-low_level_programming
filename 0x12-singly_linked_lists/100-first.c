#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * first -writes  a s e n t e n c e before the main
 * function is operated
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
