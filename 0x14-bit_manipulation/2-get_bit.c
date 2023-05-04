#include "main.h"

/**
 * get_bit - elboudelaly elmahdi
 * anuubis
 * @n: barceloona
 * @index: idhemseven7
 *
 * Return: to me
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	if (n == 0 && index < 64)
		return (0);

	for (r = 0; r <= 63; n >>= 1, r++)
	{
		if (index == r)
		{
			return (n & 1);
		}
	}

	return (-1);
}
