#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - C prog to allocate memory
  *@d : ponter to struct
  *@name : element
  *@age : element
  *@owner : element
  *
  * Discription : Program fornitializing struct dog element
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
