#ifndef CALC_H
#define CALC_H
/**
 * struct op - el boudelaly el mahdi
 * @op: nano
 * @f: egyxos
 */
typedef struct op
{
	char *op;
	int (*f)(int n, int b);
} op_t;
int op_add(int n, int b);
int op_sub(int n, int b);
int op_mul(int n, int b);
int op_div(int n, int b);
int op_mod(int n, int b);
int (*get_op_func(char *s))(int, int);
#endif
