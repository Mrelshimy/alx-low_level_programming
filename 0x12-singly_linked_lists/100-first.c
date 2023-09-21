#include <stdio.h>

void bef_main(void) __attribute__((constructor));

/**
 * bef_main - Print sentence before main is excuted
 *
 */

void bef_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
