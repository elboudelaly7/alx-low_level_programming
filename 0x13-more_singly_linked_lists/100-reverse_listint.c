#include "lists.h"

/**
 * reverse_listint - elboudelaly elmahdi
 * @head: chno li khelak tbghini ma bella
 *
 * Return: idhemseven7
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

