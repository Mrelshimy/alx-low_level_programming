#include "main.h"
/**
 *  print_to_98 - Function for printing from int to 98
 *@n : integer
 *
 * Discription : a C file for printing from int to 98
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
