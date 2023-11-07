#include "main.h"
#include <stdio.h>

/**
 * times_table - function to print multiplication table
 * Return:nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	printf("%d", i * j);
	if (j < 9)
	printf(", ");
	if (j  == 9)
	printf("\n");
	}
	}
}
