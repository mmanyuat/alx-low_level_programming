#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to allocate a memory to 2D
 * @width:the width of the array
 * @height:the height of the array
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptr[i] = malloc(width * sizeof(int));
	if (ptr[i] == NULL)
	for (i--; i >= 0; i--)
	{
	free(ptr);
	free(ptr[i]);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	ptr[i][j] = 0;
	}
	}
	return (ptr);
}
