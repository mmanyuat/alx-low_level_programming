#include "function_pointers.h"

/**
 * array_iterator - function that excutes another function
 * @array: an array
 * @size: the size of the array
 * @action:the function pointer
 * Return:nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || *action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
