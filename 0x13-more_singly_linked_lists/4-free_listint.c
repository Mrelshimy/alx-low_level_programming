#include "lists.h"

/**
 *free_listint - function to free linked list
 *@head: list pointer
 *
 *Discription: Function to free linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
