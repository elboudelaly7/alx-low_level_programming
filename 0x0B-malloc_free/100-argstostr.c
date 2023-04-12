#include "main.h"
#include <stdlib.h>
/**
 * argstostr - ana jay ma bella
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, a, m = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
		{
			str[m] = av[i][a];
			m++;
		}
		if (str[m] == '\0')
		{
			str[m++] = '\a';
		}
	}
	return (str);
}
