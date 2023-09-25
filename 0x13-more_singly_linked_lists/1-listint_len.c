#include "lists.h"

/**
 *listint_len - function to print linked list number of elements
 *@h: list
 *
 *Discription: Function to print liked list number of elements
 *
 *Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
