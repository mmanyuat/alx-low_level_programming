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
	int k;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
	return (-1);
	}
	for (k = 0; k < size; k++)
	{
	if (cmp(array[k]) != 0)
	{
	return (k);
	k++;
	}
	}
	return (-1);
}
