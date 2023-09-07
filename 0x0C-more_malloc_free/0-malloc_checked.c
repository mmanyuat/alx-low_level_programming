#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b:the variable
 * Return: pointer to alllocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}

