#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - name of the function
 * @d:pointer to the struct
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (0);
}
