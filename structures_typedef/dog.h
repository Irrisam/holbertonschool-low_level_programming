#ifndef DOG_H_
#define DOG_H_

/**
 *struct dog - doggo
 *@name: name of doggo
 *@age: age of doggo
 *@owner: owner of doggo
 */

#include <stdlib.h>
#include <stdio.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
