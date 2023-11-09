#include "lists.h"

/**
 *add_dnodeint_end - add node to dlist end
 *@head : pointer to list
 *@n: new node data
 *
 *Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode = malloc(sizeof(dlistint_t)), *tmp;

	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (!*head)
	{
		nnode->prev = NULL;
		*head = nnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = nnode;
		nnode->prev = tmp;
	}
	return (nnode);
}
