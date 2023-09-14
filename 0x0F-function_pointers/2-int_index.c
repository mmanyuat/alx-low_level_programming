#include "function_pointers.h"

/**
 * int_index - function to compare integers
 * @array:the array of the numbers
 * @size:the size of the numbers
 * @cmp:function to compare
 * Return:Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) !=  0)
	{
	return (i);
	}
	}
	return (-1);
}
