#include "sort.h"

/**
 * insertion_sort - selection sort algorithm
 * @list: linked list of integers to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp2, *t1, *t2;

	if (*list == NULL || list == NULL)
		return;
	temp = *list;
	temp = temp->next;
	while (temp != NULL)
	{
		temp2 = temp->prev;
		while (temp2 != NULL)
		{
			if (temp->n >= temp2->n)
				break;
			t1 = temp2->prev;
			t2 = temp->next;
			temp2->next = t2;
			temp->prev = t1;
			temp->next = temp2;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			temp2->prev = temp;
			if (temp2->next != NULL)
				temp2->next->prev = temp2;
			temp2 = temp->prev;
			if (temp2 != NULL)
				temp2->next = temp;
			else
				*list = temp;
			print_list(*list);
		}
		temp = temp->next;
	}
}
