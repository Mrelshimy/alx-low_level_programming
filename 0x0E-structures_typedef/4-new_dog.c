#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *dog_t - C prog to add new dog data in struct dog
  *@d : ponter to struct
  *
  * Discription : Programto print struct dog element 
  *
  */

int dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr = malloc (sizeof(name) + sizeof(owner));
	if (ptr == NULL)
		return (NULL);

}
