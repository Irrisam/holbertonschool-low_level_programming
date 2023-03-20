#include <stdio.h>
#include "dog.h"

/**
 *init_dog - struct
 *@name: name
 *@age: age
 *@owner: owner
 *@d: stocks type
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
