#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning
 * @head: points to head of list
 * @n: into new node
 * Return: success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

