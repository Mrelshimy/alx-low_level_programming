#include "lists.h"

/**
 *add_nodeint_end - function to add node to the end of linked list
 *@head: list
 *@n: int to add
 *
 *Discription: Function to add node to the end of linked list
 *
 *Return: Address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *hold;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;
	hold = *head;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (hold->next != NULL)
		hold = hold->next;

	hold->next = nnode;

	return (nnode);
}
