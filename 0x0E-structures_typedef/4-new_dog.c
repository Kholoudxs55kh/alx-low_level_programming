#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog_t *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL, or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *Newdog;

	Newdog = malloc(sizeof(dog_t));

	if (Newdog == NULL)
	{
		free(Newdog);
		return (NULL);
	}

	Newdog->name = malloc((strlen(name) + 1) * sizeof(char));
	Newdog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	Newdog->age = age;

	if (Newdog->name == NULL)
	{
		free(Newdog->name);
		free(Newdog);
		return (NULL);
	}
	else
		strcpy(Newdog->name, name);


	if (Newdog->owner == NULL)
	{
		free(Newdog->owner);
		free(Newdog);
		return (NULL);
	}
	else
		strcpy(Newdog->owner, owner);



	return (Newdog);
}
