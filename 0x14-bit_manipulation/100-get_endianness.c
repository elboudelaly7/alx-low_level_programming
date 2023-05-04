#include "main.h"

/**
 * get_endianness - elboudelaly elmahdi
 *
 * Return: to me
 */
int get_endianness(void)
{
	unsigned int h;
	char *c;

	h = 1;
	c = (char *) &h;

	return ((int)*c);
}
