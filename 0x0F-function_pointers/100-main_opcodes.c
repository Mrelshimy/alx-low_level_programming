#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: arguments count
 *@argv: array of arguments
 *
 *Discription: Function to print its op
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, size;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx ", p[i]);
	}
	return (0);
}
