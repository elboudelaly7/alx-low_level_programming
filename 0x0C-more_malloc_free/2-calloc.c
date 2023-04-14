#include "main.h"
#include <stdlib.h>
/**
 * _calloc - mli kankon m3a l3echran.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int v;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (v = 0; v < (nmemb * size); v++)
		p[v] = 0;

	return (p);
}
