#include "lists.h"

/**
 *insert_nodeint_at_index - function to add node at certain position
 *@head: list
 *@idx: new node index
 *@n: new node data
 *
 *Discription: Function to add node at certain position
 *
 *Return: Address of new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *hold;
	unsigned int i = 1;
	hold = (*head);

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;

	while (i < idx)
	{
		hold = hold->next;
		i++;
	}

	nnode->next = hold->next;
	hold->next = nnode;

	return (nnode);
}