#include "lists.h"

/**
 *add_node - function to add node to the beginning of linked list
 *@head: list
 *@str: string to add
 *
 *Discription: Function to add node to the beginning of linked list
 *
 *Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int l = strlen(str);
	list_t *nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = l;
	nnode->next = (*head);

	*head = nnode;
	return (nnode);
}
