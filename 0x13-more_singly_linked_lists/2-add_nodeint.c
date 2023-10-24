#include "lists.h"

/**
 * add_nodeint - inserts a node at the beginning of the list
 *
 * @head: a pointer to the head node
 * @n: the integer value to store
 *
 * Return: a pointer to the new head, else NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
