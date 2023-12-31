#include "lists.h"

/**
 * print_listint - function that prints all ellements in the struct listint_t
 *
 * @h: head pointer
 *
 * Return: total number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
