#include "lists.h"

/**
 *sum_listint - function to sum linked list data
 *@head: list
 *
 *Discription: Function to print liked list number of elements
 *
 *Return: Number of nodes
 */

int sum_listint(listint_t *head)
{
	size_t i = 0;
	listint_t *hold = head;

	while (hold)
	{
		i += hold->n;
		hold = hold->next;
	}
	return (i);
}
