#include "main.h"


/**

 * create_array - el boudelaly,

 * barcelona best club in world.

 * @size: size of array

 * @c: char to assign

 * Return: pointer to array, NULL if fail

*/

char *create_array(unsigned int size, char c)

{

	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);

}
