#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints dog
 * @d: the structure
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (d->age == '\0')
			printf("Name: (nil)");
		else
			printf("Name: %f\n", d->age);

		if (d->owner == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->owner);
	}
}
