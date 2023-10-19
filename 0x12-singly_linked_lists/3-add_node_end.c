#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: pointer to head node
 * @str: string data
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tail;

	tail = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head =  new_node;
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
	return (*head);
}
