#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to check for malloc
 * @b:the bytes of memory needed to be allocated
 * Return:ptr or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
