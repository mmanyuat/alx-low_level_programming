#include "function_pointers.h"

/**
 * int_index - function that searches integers
 * @array:the array of the integers
 * @size:the size of the array
 * @cmp:function pointer
 * Return:an integr
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array  && cmp && size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);



}
