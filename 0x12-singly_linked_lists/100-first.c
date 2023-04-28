#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - elboudelaly elmahdi
 * function is executed
 */
void first(void)
{
	printf("m the best ever,\n");
	printf("i hope being devloper!\n");
}
