#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_dog - C prog to free dog struct
  *@d : pointer to struct
  *
  * Discription : Program to free dog struct
  *
  */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d);
}
