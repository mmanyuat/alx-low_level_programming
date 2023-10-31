#include "main.h"
#include <stdlib.h>

/**
 * create_array - name of function that creates arrays
 * @size:the number of the chars
 * @c:the chars
 * Return:NULL or pointers to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
	return (NULL);
	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}
	return (ptr);
}
