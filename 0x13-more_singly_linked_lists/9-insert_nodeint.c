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
	unsigned int i = 0;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL || head == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	hold = (*head);
	while (hold != NULL)
	{
		if (i == idx - 1)
		{
			nnode->next = hold->next;
			hold->next = nnode;
			return (nnode);
		}
		i++;
		hold = hold->next;
	}
	free(nnode);
	return (NULL);
}
