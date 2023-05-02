#include "lists.h"

/**
 * listint_len - ilboudelaly elmahdi
 * @h: idhemseven7
 *
 * Return: anuubis
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
