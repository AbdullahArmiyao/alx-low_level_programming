#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: a pointer to the head node
 * @n: the integer value to store
 *
 * Return: a pointer to the new head, else NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
