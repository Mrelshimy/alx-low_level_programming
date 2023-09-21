#include "lists.h"

/**
 *free_list - function to free linked list
 *@head: list pointer
 *
 *Discription: Function to free linked list
 *
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
