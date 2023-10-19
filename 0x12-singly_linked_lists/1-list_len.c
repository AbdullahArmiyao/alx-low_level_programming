#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to list struct
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			i++;

		h = h->next;
	}
	return (i);
}
