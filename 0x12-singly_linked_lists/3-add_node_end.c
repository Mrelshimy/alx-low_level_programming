#include "lists.h"

/**
 *add_node_end - function to add node to the end of linked list
 *@head: list
 *@str: string to add
 *
 *Discription: Function to add node to the end of linked list
 *
 *Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hold = *head;
	int l = strlen(str);
	list_t *nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = l;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (hold->next)
		hold = hold->next;

	hold->next = nnode;

	return (nnode);
}
