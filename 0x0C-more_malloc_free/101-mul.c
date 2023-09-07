#include "main.h"
#include <stdlib.h>

/**
  * main - entry point
  *
  * Discription : Program for multiplication of 2 positive nums
  */

int main(int argc. char *argv[])
{
	int i, j, num1, num2, mul;
	int *ptr;

	if (argc < != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];
	while (num1[i])
	{
		if (num1[i]  < '0' || > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	while (num2[i])
	{
		if (num2[i]  < '0' || > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}	
	ptr = malloc(num1 * num2)
}
