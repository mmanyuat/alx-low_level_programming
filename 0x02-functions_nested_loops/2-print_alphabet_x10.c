#include "main.h"

/**
 * print_alphabet_x10 - A function to print alphabebts x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
	for (c = 'a';  c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
