#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to first
 * Return: success
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
	n = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = n;
	}

	*head = p;

	return (*head);
}

