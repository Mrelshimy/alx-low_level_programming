#include "lists.h"

/**
 *pop_listint - function to delete first node and return it's data
 *@head: list
 *
 *Discription: Function to delete first node and return it's data
 *
 *Return: data of deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *hold = (*head)->next;
	int n = (*head)->n;

	if (*head == NULL)
		return (0);

	free(*head);
	(*head) = hold;
	return (n);
}
