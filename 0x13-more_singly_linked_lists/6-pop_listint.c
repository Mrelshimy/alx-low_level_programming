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
	listint_t *hold;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;
	return (n);
}
