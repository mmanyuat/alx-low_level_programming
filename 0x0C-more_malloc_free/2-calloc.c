#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to allocate memory to array
 * @nmemb:the elements of the array
 * @size:size of nmemb
 * Return:a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	total_size = (nmemb * size);
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
	return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);

}
