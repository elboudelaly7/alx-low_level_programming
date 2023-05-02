#include "lists.h"

/**
 * pop_listint - elboudelaly elmahdi
 * @head: idhemseven7
 *
 * Return: anuubiiisss
 * hakuna matata
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
