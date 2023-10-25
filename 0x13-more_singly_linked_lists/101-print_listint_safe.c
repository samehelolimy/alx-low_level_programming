#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - our function
 * @head: A pointer to head
 * Return: success
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
	if (t == h)
	{
	t = head;
	while (t != h)
	{
	node++;
	t = t->next;
	h = h->next;
	}

	t = t->next;
	while (t != h)
	{
	node++;
	t = t->next;
	}

	return (node);
	}
	t = t->next;
	h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list
 * @head: A pointer to first
 * Return: success
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
	for (; head != NULL; node++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (i = 0; i < node; i++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}

