#include "main.h"

/**
 * set_bit - elboudelaly elmahdi
 * anuubis
 * @n: idhemseven7
 * @index: barceloona
 *
 * Return: to me
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
