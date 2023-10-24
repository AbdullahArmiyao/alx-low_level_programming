#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *c_node;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node);
	}
}
