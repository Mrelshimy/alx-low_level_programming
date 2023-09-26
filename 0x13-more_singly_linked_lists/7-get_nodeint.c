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
	listint_t *len;
	unsigned int i = 0;
	unsigned int t = 0;

	hold = head;
	len = head;

	while (len->next != 0)
	{
		len = len->next;
		t++;
	}

	if (index > t)
		return (0);
	  
	if (hold == NULL)
		return (0);

	while (i < index)
	{
		hold = hold->next;
		i++;
	}

	return (hold);
}
