#include <stdio.h>

/**
 * _strlen - return the lenght of the string
 * @str: the string to get
 * Return: return the lenght
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
	}
	return (length);
}
