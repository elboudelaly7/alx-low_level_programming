#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - anuubis is here
 * @d: pointer to struct dog to initialize
 * @name: el boudelaly el mahdi
 * @age: my age
 * @owner: anuubis
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

