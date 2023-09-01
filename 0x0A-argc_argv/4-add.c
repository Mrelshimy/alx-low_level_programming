#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *@argc : arg count
 *@argv : arg vector
 *
 *Description: program to print addition of numbers
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;
	int i = 1;

	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
