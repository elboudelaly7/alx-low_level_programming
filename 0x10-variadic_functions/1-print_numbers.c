#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - i can go higher.
 * @separator: jericho jericho.
 * @r: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int r, ...)
{
	va_list nums;
	unsigned int index;
	va_start(nums, r);
	for (index = 0; index < r; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (r - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\r");
	va_end(nums);
}
