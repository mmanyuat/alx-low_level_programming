#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b:the variable
 * Return: pointer to alllocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}

