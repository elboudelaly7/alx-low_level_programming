#include "main.h"
#include <stdlib.h>
/**
 * array_range - elboudelaly elmahdi.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *mb;
	int d;

	if (min > max)
		return (NULL);

	mb = malloc(sizeof(*mb) * ((max - min) + 1));

	if (mb == NULL)
		return (NULL);

	for (d = 0; min <= max; d++, min++)
		mb[d] = min;

	return (mb);
}
