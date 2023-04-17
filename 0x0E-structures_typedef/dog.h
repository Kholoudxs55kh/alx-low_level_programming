#ifndef DOG_H
#define DOG_H

int _putchar (char c);
/**
 * struct dog - structure named dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
