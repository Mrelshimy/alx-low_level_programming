#include "lists.h"

/**
 *list_len - function to print linked list number of elements
 *@h: list
 *
 *Discription: Function to print liked list number of elements
 *
 *Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return(n);
}
	
