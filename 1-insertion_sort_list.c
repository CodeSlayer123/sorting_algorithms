#include "sort.h"

/**
 * insertion_sort_list - sorts linked list of integers using insertion sort
 * @list: list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *savepoint = *list;
	listint_t *head = *list;
	listint_t *current;
	listint_t *tmp;

	while (head->next != NULL)
	{
		while (1)
		{
			if (head->next == NULL)
				return;
			if (head->n > head->next->n)
			{
				current = head->next;
				tmp = head;
				tmp->next = current->next;
				current->next = tmp;
				if (head->prev != NULL)
				{
					current->prev = tmp->prev;
					tmp->prev->next = current;
					tmp->prev = current;
				}
				else
				{
					current->prev = NULL;
					tmp->prev = current;
				}
					head = head->prev;
				if (head->prev != NULL)
					head = head->prev;
				while ((*list)->next != NULL)
				{
					printf("%d, ", (*list)->n);
					*list = (*list)->next;
				}
				printf("\n");
				*list = savepoint;
			}
			else
			{
				head = head->next;
				break;
			}
		}
	}
}
