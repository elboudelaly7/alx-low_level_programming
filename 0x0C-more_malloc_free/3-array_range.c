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
	int *ar;
	int d;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (d = 0; min <= max; d++, min++)
		ar[d] = min;

	return (ar);
}
