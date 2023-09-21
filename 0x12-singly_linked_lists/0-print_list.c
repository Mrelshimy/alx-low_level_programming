#include "lists.h"

/**
 *print_list - function to print linked list elements
 *@h: list
 *
 *Discription: Function to print liked list elements
 *
 *Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return(n);
}
	
