#include "lists.h"

/**
 * listint_len - our function
 * @h: pointer to list
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (n);
}

