#include "main.h"
#include <stdlib.h>
/**
 * str_concat - vaaammooossss barcelona
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int r, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = ci = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (r + ci + 1));

	if (conct == NULL)
		return (NULL);
	r = ci = 0;
	while (s1[r] != '\0')
	{
		conct[r] = s1[r];
		r++;
	}

	while (s2[ci] != '\0')
	{
		conct[r] = s2[ci];
		r++, ci++;
	}
	conct[r] = '\0';
	return (conct);
}
