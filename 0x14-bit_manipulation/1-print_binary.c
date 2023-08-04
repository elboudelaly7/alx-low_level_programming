#include "main.h"

/**
 * print_binary - elboudelaly elmahdi
 * @n: barceloona
 */
void print_binary(unsigned long int n)
{
	int r, count = 0;
	unsigned long int current;

	for (r = 63; r >= 0; r--)
	{
		current = n >> r;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
