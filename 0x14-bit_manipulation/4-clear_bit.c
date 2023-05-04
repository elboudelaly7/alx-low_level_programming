#include "main.h"

/**
 * clear_bit - elboudelaly elmahdi
 * anuubis
 * @n: idhemseven7
 * @index: barceloona
 *
 * Return: to me
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 63)
		return (-1);

	c = 1 << index;

	if (*n & c)
		*n ^= c;

	return (1);
}

