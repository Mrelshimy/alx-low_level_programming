#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - C prog to free dog struct
  *@d : pointer to struct
  *
  * Discription : Program to free dog struct
  *
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
