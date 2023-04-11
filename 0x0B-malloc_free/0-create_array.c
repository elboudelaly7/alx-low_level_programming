#include "main.h"
#include <stdlib.h>
/**
 * create_array - elboudelaly elmahdi
 * @size: size of array
 * @c: char to assign
 * Description: barcelona best club in world
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
