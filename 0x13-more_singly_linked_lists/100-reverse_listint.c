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
	listint_t *prevn, *currn, *nextn;

	prevn = NULL;
	currn = nextn = (*head);

	while (nextn != 0)
	{
		nextn = nextn->next;
		currn->next = prevn;
		prevn = currn;
		currn = nextn;
	}
	(*head) = prevn;
	return (*head);
}
