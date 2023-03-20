#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a new doggo 
 *@name: doggo's name
 *@age: doggo's age
 *@owner: doggo's owner
 *Return: bite
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t* bite = NULL;
	int compteur = 0;
	bite = malloc(sizeof(dog_t));
	if (bite == NULL)
		return(NULL);
	for (;compteur < name[compteur]; compteur++)
	{
	}
	bite->name = malloc(compteur*sizeof(bite->name));
	for (compteur = 0; compteur < owner[compteur]; compteur++)
	{
	}
	bite->owner = malloc(compteur*sizeof(bite->owner));
	if (bite == NULL || bite->name == NULL || bite->owner == NULL)
	{
		free(bite->name);
		free(bite->owner);
		free(bite);
		return (NULL);
	}
	for (compteur = 0 ;name[compteur] != '\0'; compteur++)
		bite->name[compteur] = name[compteur]; 
	bite->name[compteur] = '\0';
	bite->age = age;
	for (compteur = 0 ;owner[compteur] != '\0'; compteur++)
		bite->owner[compteur] = owner[compteur];
	bite->owner[compteur] = '\0';
	return (bite);
}
