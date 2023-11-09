#include "lists.h"

/**
 *add_dnodeint - add node to dlist beginning
 *@head : pointer to list
 *@n: new node data
 *
 *Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnode->prev = NULL;
	if (!*head)
	{
		nnode->next = NULL;
		*head = nnode;
	}
	else
	{
		nnode->next = (*head);
		(*head)->prev = nnode;
		(*head) = nnode;
	}
	return (*head);
}

