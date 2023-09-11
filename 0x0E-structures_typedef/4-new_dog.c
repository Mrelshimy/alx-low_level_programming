#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strcpy  - copy a string to another
 *@dest : first string
 *@src : second string
 *
 * Discription : Function to a string to another
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}


/**
  *new_dog - C prog to add new dog data in struct dog
  *@name : dog name
  *@age : dog age
  *@owner : owner
  *
  * Discription : Programto print struct dog element
  *
  * Return: NULL if fail
  */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i = 0, j = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (0);

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (0);
	ndog->name = malloc(i + 1);
	if (ndog->name == NULL)
		return (0);
	ndog->owner = malloc(j + 1);
	if (ndog->owner == NULL)
		return (0);

	_strcpy(ndog->name, name);
	ndog->age = age;
	_strcpy(ndog->owner, owner);
	return (ndog);
}
