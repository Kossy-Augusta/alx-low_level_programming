#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct
 * @d: pointer to a struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("nill");
	if ((*d).owner == NULL)
		printf("nill");
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
