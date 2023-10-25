#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 *
 * @head: head pointer
 * @idx: index
 * @n: data
 *
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int position = 0;

	current = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (position == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		position++;
	}

	return (NULL);
}
