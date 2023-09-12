#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function to print dog
 * struct dog: the struct name
 * @d:the pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

}
