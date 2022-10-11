#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list  of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: double pointer to doubly-linked list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_current;

	if (list == NULL || *list == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		next_current = current->next;
		if (current->prev != NULL && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			while (current->prev != NULL && current->prev->n > current->n)
			{
				current->next = current->prev;
				current->prev = current->prev->prev;
			}
			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			current->next->prev = current;
			print_list(*list);
		}
		current = next_current;
	}
}
