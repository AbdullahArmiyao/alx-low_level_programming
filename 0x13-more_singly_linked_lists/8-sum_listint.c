#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data in the linked list
 *
 * @head: head pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
