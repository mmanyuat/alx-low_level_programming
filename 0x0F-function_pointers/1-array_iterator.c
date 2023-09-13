#include "function_pointers.h"

/**
 * array_iterator - function to iterate array
 * @array:the array
 * @size:the size of the array
 * @action:the poitner to the function
 * Return:nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(*array);
	array++;
	}
}
