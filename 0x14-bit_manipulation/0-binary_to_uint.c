#include "main.h"

/**
 * binary_to_uint - elboudelaly elmahdi
 * anuubis
 * @b: barceloona
 *
 * Return: to me
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nt;
	int len, base_two;

	if (!b)
		return (0);

	nt = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			nt += base_two;
		}
	}

	return (nt);
}
