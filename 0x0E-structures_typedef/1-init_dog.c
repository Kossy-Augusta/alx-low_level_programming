#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct
 * @d: poimter to dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
