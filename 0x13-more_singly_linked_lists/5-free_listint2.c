#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: our pointer
 * Return: success
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!head)
	return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}

