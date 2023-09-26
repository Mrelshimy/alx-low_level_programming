#include "lists.h"

/**
 *get_nodeint_at_index - function to add node at certain position
 *@head: list
 *@index: new node index
 *
 *Discription: Function to add node at certain position
 *
 *Return: Address of new element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold;
	unsigned int i = 0;
	hold = head;

	if (hold == NULL)
		return (NULL);

	while (i < index)
	{
		hold = hold->next;
		i++;
	}

	return (hold);
}
