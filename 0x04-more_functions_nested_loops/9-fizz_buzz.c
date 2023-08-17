#include <stdio.h>

/**
  * main - entry point
  *
  * Discription : Fizz Buzz program
  *
  *Return: 1 (Success) , 0 Fail
  */

int main(void)
{
	int n = 1;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
