#include "main.h"

/**
 * print_line - A function to print line
 * @n: the character n
 * Return: Always return void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}