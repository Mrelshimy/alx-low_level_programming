#include "lists.h"

/**
 *delete_nodeint_at_index - function to reverse a linked list
 *@head: list
 *
 *Discription: Function to reverse a linked list
 *
 *Return: pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevn, *currn;

	prevn = currn = NULL;

	while (*head != 0)
	{
		currn = (*head)->next;
		(*head)->next = prevn;
		prevn = *head;
		*head = currn;
	}
	(*head) = prevn;
	return (*head);
}
