#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *
 *  @head: pointer to head
 *  @index: is the index of the node, starting at 0
 *
 *  Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (position == index)
			return (head);

		head = head->next;
		position++;
	}
	return (NULL);
}
