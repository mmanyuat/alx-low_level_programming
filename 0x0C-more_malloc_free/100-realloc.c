#include "main.h"
#include <stdlib.h>

/**
 * _realloc - functin to rellocate memory block
 * @ptr:pointer with intial memory address
 * @old_size:size in byts of that memory
 * @new_sizethe size in bytes of the new memory
 * Return:the pointer or NULL if there is an error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *n;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	{
	n = malloc(new_size);
	if (n == NULL)
	return (NULL);
	return (n);
	}
	else
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	n = malloc(new_size);
	if (n == NULL)
	return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
	n[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (n);
}
