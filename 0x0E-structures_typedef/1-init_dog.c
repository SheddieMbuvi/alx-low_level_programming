#include "dog.h"
/**
 * init_dog - Funtion to intialize variable
 * @d: structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: the owner
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
