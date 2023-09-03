#include "main.h"

/**
 * _puts - print string
 * @s:the string
 * Return:nothing
 */

void _puts(char *s)
{
	while (*s)
	_putchar(*s++);
	_putchar('\n');
}
