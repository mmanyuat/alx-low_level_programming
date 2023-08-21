#include "main.h"

/**
 * swap_int - A function to swap two integers
 * @a: the first integers
 * @b: the second integer
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
