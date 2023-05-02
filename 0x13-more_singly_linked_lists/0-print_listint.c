#include "lists.h"

/**
 * print_listint - elboudelaly elmahdi
 * @h: idhemseven7
 *
 * Return: anuubiissss
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
