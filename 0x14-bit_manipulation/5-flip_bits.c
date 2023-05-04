#include "main.h"

/**
 * flip_bits - elboudelaly elmahdi
 * anuubis
 * @n: idhemseven7
 * @m: barceloona
 *
 * Return: to me
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit++;
	}

	return (bit);
}
