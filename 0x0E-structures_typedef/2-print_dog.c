#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - C prog to print struct element
  *@d : ponter to struct
  *
  * Discription : Programto print struct dog element
  *
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
