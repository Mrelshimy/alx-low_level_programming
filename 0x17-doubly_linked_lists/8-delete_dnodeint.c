#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at certain index
 *@head : pointer to list
 *@index: node index to delete
 *
 *Return: 1 succeed, -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (n < index - 1)
	{
		tmp = tmp->next;
		n++;
	}

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
