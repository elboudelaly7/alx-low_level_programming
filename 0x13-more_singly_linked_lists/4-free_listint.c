#include "lists.h"

/**
 * free_listint - elboudelaly elmahdi
 * @head: idhemseven7
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
