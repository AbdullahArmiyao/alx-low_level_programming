#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of list_t
 * @head: pointer to pointer to the head of the list
 * @str: string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* return NULL if string input is empty */
	if (str == NULL)
		return (NULL);

	/* allocate memory to new node */
	new_node = malloc(sizeof(list_t));
	/* if the memory is null, return null */
	if (new_node == NULL)
		return (new_node);

	/* duplicate the input string */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		/* free memory and return null if new_node->str is null */
		free(new_node->str);
		return (NULL);
	}
	/* point the new node tho current head */
	new_node->next = *head;
	/* update the current head to new node */
	*head = new_node;

	return (new_node);
}
