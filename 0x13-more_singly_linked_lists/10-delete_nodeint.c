#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nth node of a listint_t list
 *
 * @head: a pointer to the head node
 * @index: the index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int position = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current != NULL)
	{
		if (position == index - 1 && current->next != NULL)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		position++;
	}
	return (-1);
}
