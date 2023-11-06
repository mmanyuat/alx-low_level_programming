#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function to declare struct
 * @d:the struct name
 * @name:the name of the member
 * @age:the age of the member
 * @owner:owner of the dog
 * Return:nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
