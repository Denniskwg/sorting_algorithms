#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the first node of a linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp1, *temp2;

	if (list == NULL)
		return;
	current = get_head(*list);
	while (current != NULL)
	{
		temp2 = current->next;
		while (current->prev && (current->n < current->prev->n))
		{
			temp1 = current->prev;
			temp1->next = current->next;
			current->prev = temp1->prev;
			temp1->prev = current;
			current->next = temp1;
			if (temp1->next)
				temp1->next->prev = temp1;
			if (current->prev)
				current->prev->next = current;
			print_list(get_head(*list));
		}
		current = temp2;
	}
	*list = get_head(*list);
}
/**
 * get_head - returns the start of a doubly linked list
 * @tmp: node in a doubly linked list
 * Return: start of a doubly linked list
 */
listint_t *get_head(listint_t *tmp)
{
	while (tmp->prev)
		tmp = tmp->prev;

	return (tmp);
}
