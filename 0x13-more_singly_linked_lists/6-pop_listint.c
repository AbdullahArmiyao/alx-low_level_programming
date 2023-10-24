#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: head node
 *
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;

	*head = (*head)->next;
	free(tmp);
	tmp = NULL;

	return (data);
}
