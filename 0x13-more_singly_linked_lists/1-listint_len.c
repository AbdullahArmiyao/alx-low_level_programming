#include "lists.h"

/**
 * listint_len - function that prints length of list
 *
 * @h: head pointer
 *
 * Return: total number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
