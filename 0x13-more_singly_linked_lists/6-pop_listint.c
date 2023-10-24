#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: our pointer
 * Return: success
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
	int node;

	if (!head || !*head)
	return (0);

	node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node);
}

