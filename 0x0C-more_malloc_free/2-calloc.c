#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function to allocate memory to array
 * @nmemb:the elements of the array
 * @size:size of nmemb
 * Return:a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = malloc(nmemb * size);
	return (ptr);
}
