#include "lists.h"

/**
 *sum_dlistint - return sum of all elements in dlist
 *@head : pointer to list
 *
 *Return: sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
