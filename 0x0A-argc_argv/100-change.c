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
	int cent[] = {25, 10, 5, 2, 1};
	int i;
	int num;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cent[i])
		{
			num -= cent[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
