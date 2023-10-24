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
      	return 0;
}

