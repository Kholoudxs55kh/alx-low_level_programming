#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable
 * @d: the dog
 * @name: the dog name
 * @age: the dog age
 * @owner: me
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
