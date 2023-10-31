#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to allocate 2D array
 * @width:the rows
 * @height:the column
 * Return:pointer to the d arrasy
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	return (NULL);
	ptr = malloc(sizeof(int *) * width);
	if (ptr == NULL)
	return (NULL);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < width; i++)
	{
	ptr[i] = malloc(sizeof(int) * height);
	if (ptr[i] == NULL)
	{
	for (j = 0; j < i; j++)
	free(ptr[j]);
	free(ptr);
	return (NULL);
	}
	for (j = 0; j < height; j++)
	{
	ptr[i][j] = 0;
	}
	}
	return (ptr);
}
