#include "lists.h"

/**
 *delete_nodeint_at_index - function to delete node at certain position
 *@head: list
 *@index: deleted node index
 *
 *Discription: Function to delete node at certain position
 *
 *Return: 1 success, -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *nextn;
	unsigned int i = 1;

	hold = (*head);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = hold->next;
		free(hold);
		return (1);
	}

	while (i < index - 1)
	{
		hold = hold->next;
		i++;
	}

	nextn = hold->next;
	hold->next = nextn->next;
	free(nextn);

	return (1);
}
