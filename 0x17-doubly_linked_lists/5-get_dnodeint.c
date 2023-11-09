#include "lists.h"

/**
 *get_dnodeint_at_index - return node at certain index
 *@head : pointer to list
 *@index: node index to return
 *
 *Return: pointer to index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head || !index)
		return (NULL);

	while (head)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (NULL);
}
