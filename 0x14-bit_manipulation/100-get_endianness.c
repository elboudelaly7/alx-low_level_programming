#include "main.h"

/**
 * get_endianness - elboudelaly almahdi
 * Return: seven
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *) &r;

	return (*c);
}
