#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array of characters
 * @size:the size of the array
 * @c:the character
 * Return:nothing
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (ptr == 0 || ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}
	return (ptr);
}
