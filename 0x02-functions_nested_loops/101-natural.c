#include <stdio.h>

/**
 *  main  - Entry point
 *
 * Discription : a C file for printing sum of multiples of 3 , 5
 * below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
}
