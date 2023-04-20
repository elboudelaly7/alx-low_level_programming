#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - idhemseven
 * barcelooonnaaa
 * @s: vaaamoooosssaaa
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
		m++;
	return (ops[m].f);
}
