#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for elements of an array
 * @nmemb:the elements of the array
 * @size:the number of bytes
 * Return:NULL or pointer to the adress
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
	ptr[i] = 0;
	}
	return (ptr);
}
