#include "main.h"

/**
 * rev_strings - function to reverse strings
 * @s:the pointer to the string
 * Return:nothing
 */

void rev_string(char *s)
{
	int count;

	while (*s != '\0')
	{
	count++;
	s++;
	}
	while (count >= 0)
	{
	_putchar(s[count]);
	count--;
	}
}
