#include <stdlib.h>
#include "main.h"


/**
 * *malloc_checked - elboudelaly elmahdi.
 * @b: number of bytes to allocate
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)

{

	int *r = malloc(b);

	if (r == 0)
		exit(98);

	return (r);

}
