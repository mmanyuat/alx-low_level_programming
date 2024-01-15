#include "main.h"

/**
 * _puts - function to print string
 * @s:the string
 */

void _puts(char *s)
{
	while (*s)
	_putchar(*s++);
	_putchar('\n');
}
