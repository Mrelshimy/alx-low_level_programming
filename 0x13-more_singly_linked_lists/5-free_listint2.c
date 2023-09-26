#include "lists.h"

/**
 *free_listint2 - function to free linked list
 *@head: list pointer
 *
 *Discription: Function to free linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	*head = NULL;
}
