#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a certain node
 * @head: pointer to first
 * @index: index of node
 * Return: success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *node = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}

	while (x < index - 1)
	{
	if (!tmp || !(tmp->next))
	return (-1);
	tmp = tmp->next;
	x++;
	}

	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}

