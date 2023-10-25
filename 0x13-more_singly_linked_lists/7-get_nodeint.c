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
	listint_t *current;
	unsigned int position = 0;

	current = head;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (position == index)
			return (current);

		current = current->next;
		position = position + 1;
	}
	return (NULL);
}
