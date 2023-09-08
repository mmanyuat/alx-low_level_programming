#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 * @min:minimum
 * @max:maximum
 * Return:the pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
	return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = min ; i <= max; i++)
	{
	ptr[i - min] = i;
	}
	return (ptr);
}
