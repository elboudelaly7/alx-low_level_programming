#include "main.h"
#include <stdlib.h>

/**

 * *create_array - el boudelaly,

 * barcelona best club in world.

 * @size: size of array

 * @c: char to assign

 * Return: pointer to array, NULL if fail

*/

char *create_array(unsigned int size, char c)

{

	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);

}
