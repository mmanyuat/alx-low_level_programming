#include "main.h"

/**
 * _puts - A function to print string
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
