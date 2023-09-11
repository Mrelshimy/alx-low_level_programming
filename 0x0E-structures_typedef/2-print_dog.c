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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
