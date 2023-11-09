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
	dlistint_t *current = *head;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
	        current->next->prev = NULL;
	        *head = current->next;
	        free(current);
	        return (1);
	}

	while (n < index && current != NULL)
	{
		current = current->next;
	        n++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
	{
		current->prev->next = current->next;
	        current->next->prev = current->prev;
        }
	else
		current->prev->next = NULL;

        free(current);
        return (1);
}
