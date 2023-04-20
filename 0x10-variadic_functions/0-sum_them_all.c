#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - i can go high
 * @r: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If r == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int r, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, r);
	for (b = 0; b < r; b++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
