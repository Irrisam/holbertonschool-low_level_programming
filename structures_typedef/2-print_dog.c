#include <stdio.h>
#include "dog.h"

/**
 *
 */

void print_dog(struct dog *d)

{
	
	if (d->name == NULL)
	{
	d->name = "(nil)";
	}
	if (d->age == 0.0)
	{
	d->age = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->age = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
