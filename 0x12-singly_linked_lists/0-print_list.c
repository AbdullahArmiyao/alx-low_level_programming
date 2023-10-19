#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t list
 * @h: pointer to a list structure
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i = 0; /* index or counter */

	while (h != NULL) /* while not null */
	{
		if (h->str == NULL)
			printf("[0] (nil)\n"); /* if the string is NULL, return [0] (nil) */
		else /* elses just print the length and string value of the current node */
			printf("[%d] %s\n", h->len, h->str);

		h = h->next; /* move to next node */
		i++; /* increase the counter/index */
	}

	return (i); /* return the total number of nodes */
}
