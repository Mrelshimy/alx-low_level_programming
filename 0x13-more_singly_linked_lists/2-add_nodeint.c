#include "lists.h"

/**
 *add_nodeint - function to add node to the beginning of linked list
 *@head: list
 *@n: int to add
 *
 *Discription: Function to add node to the beginning of linked list
 *
 *Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = (*head);

	*head = nnode;
	return (nnode);
}
