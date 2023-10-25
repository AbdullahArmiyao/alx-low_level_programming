#include "../lists.h"

int main()
{
	listint_t *list = malloc(sizeof(listint_t));
	list->n = 1;

	listint_t *second = malloc(sizeof(listint_t));
	second->n = 2;

	listint_t *third = malloc(sizeof(listint_t));
	third->n = 3;
	list->next = second;			        
	second->next = third;
	third->next = NULL;

	size_t printed = print_listint(list);
	printf("Elements printed: %zu\n", printed);


	// Free allocated memory for the list
	while (list != NULL)
	{
		listint_t *temp = list;
                list = list->next;
                free(temp);
        }
	
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	node = get_nodeint_at_index(head, 5);
	printf("%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
								        return (0);
      	return 0;
}

