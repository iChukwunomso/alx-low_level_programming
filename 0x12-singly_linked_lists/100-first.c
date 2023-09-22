#include <stdio.h>

void ComeFirst(void) __attribute__ ((constructor));

/**
 * ComeFirst - prints a sentence before the main
 * function is executed
 */

void ComeFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
