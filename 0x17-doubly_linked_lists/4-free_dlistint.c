#include "lists.h"

/**
 *add_dnodeint - add node to dlist beginning
 *@head : pointer to list
 *@n: new node data
 *
 *Return: pointer to new node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
