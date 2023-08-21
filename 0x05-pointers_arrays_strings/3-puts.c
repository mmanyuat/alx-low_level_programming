#include "main.h"

/**
 * _puts - A function to print string
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
