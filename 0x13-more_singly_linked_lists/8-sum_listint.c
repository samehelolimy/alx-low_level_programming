#include "lists.h"

/**
 * sum_listint - calculates the sum of all
 * @head: pointer to first node
 * Return: success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}

	return (sum);
}

