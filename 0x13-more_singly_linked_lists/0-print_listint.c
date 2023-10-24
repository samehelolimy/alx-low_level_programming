#include "lists.h"

/**
 * print_listint - our function
 * @h : points to next element
 * Return: list element
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

