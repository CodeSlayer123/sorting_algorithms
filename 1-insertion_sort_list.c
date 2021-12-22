#include "sort.h"

/**
 * insertion_sort_list - sorts linked list of integers using insertion sort
 * @list: list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *tmp;
	listint_t *future;



	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			tmp = head;
			future = head->next;
			head = head->next;
			future = tmp;
			head->prev = future;

			while ((*list)->next != NULL)
			{
				printf("%d, ", (*list)->n);
				*list = (*list)->next;
			}
		}

	}
}
