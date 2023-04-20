#include "3-calc.h"
int op_add(int n, int b);
int op_sub(int n, int b);
int op_mul(int n, int b);
int op_div(int n, int b);
int op_mod(int n, int b);
/**
 * op_add - el mahdi el boudelaly
 * @n: nano.
 * @b: egyxos.
 *
 * Return: The sum of n and b.
 */
int op_add(int n, int b)
{
	return (n + b);
}
/**
 * op_sub - annuuubbbiiisss
 * @n: The first number.
 * @b: The second number.
 *
 * Return: The difference of n and b.
 */
int op_sub(int n, int b)
{
	return (n - b);
}
/**
 * op_mul - barcelona
 * @n: nano
 * @b: egyxos
 *
 * Return: The product of n and b.
 */
int op_mul(int n, int b)
{
	return (n * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @n: The first number.
 * @b: The second number.
 *
 * Return: The quotient of n and b.
 */
int op_div(int n, int b)
{
	return (n / b);
}
/**
 * op_mod - spider man
 * @n: nano
 * @b: egyxos
 *
 * Return: The remainder of the division of n by b.
 */
int op_mod(int n, int b)
{
	return (n % b);
}
