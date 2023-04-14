#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - idhemseven7
 * @k: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int k)
{
	return (k >= '0' && k <= '9');
}

/**
 * _strlen - elboudelaly elmahdi
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++)
		y++;
	return (y);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, d, k, m;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = m = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		k = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			d = s2[l2] - '0';

			k += r[l1 + l2 + 1] + (a * d);
			r[l1 + l2 + 1] = k % 10;

			k /= 10;
		}
		if (k)
			r[l1 + l2 + 1] += k;
	}
	return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, k, m;

	if (argc != 3)
		printf("Error\n"), exit(98);

	m = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	k = 0;
	a = 0;
	while (k < m)
	{
		if (r[k])
			a = 1;
		if (a)
			_putchar(r[k] + '0');
		k++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
