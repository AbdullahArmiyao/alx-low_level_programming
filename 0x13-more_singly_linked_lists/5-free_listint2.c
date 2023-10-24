#include "lists.h"

/**
 * safely_free_mem - safely free allocated memory
 * @pnt: pointer to memory location
 */

void safely_free_mem(void **pnt)
{
	if (pnt != NULL || *pnt != NULL)
	{
		free(*pnt);
		*pnt = NULL;
	}
}

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *c_node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		c_node = *head;
		*head = (*head)->next;
		safe_mem_free(c_node);
	}
}
