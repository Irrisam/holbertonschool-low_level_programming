#include "dog.h"
/**
 *free_dog - frees
 *@d: pointer to dogt
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
}
