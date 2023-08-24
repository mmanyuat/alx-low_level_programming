#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse arrays of a function
 * @a:the array
 * @n:numbers of the elements
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i > n / 2; i--)
	{
	temp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = temp;
	}
}
