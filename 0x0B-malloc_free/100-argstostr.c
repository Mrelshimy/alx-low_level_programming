#include "main.h"
#include <stdlib.h>

/**
  * argstostr - C prog to concatenate arguments
  * @ac : args count
  * @av : args array
  *
  * Discription : Program to concatenate arguments
  *
  *Return: pointer to mem
  */

int _strlen(char *s);

char *argstostr(int ac, char **av)
{
	int i = 0;
	char *ptr;
	int argsize = 0;
	int j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, argsize++)
		argsize += _strlen(av[i]);

	ptr = malloc(sizeof(char) * argsize + 1);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			ptr[k] = av[i][j];
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);

}

/**
 * _strlen - String length function
 *@s : String
 *
 * Discription : Function to return string length
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
