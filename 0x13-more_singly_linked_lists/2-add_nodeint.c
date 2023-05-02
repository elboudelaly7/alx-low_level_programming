#include "lists.h"

/**
 * add_nodeint - elboudelaly elmahdi
 * @head: idhemseven7
 * @n: anuubis
 *
 * Return: egyxos
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
