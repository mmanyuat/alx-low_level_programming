#include "main.h"
#include <stdlib.h>

/**
 * array_range - function to list elements of an array
 * @min:the minimum value
 * @max:the max value
 * Return:pointer to the address or NULL incase of an error
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	return (NULL);
	for (i = min; i < max; i++)
	{
	ptr[i - min] = i;
	}
	return (ptr);
}

