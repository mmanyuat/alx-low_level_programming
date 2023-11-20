#include "main.h"
#include <stdio.h>

/**
 * print_rev - program to print in reverse manner
 * @s:the string
 * Return:void
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	while (s[c] >= 0)
	{
	_putchar(s[c]);
	c--;
	}
	_putchar('\n');
}
