#include "main.h"

/**
 * _strlen - function to find lenght of string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
	longa++;
	s++;
	}
	return (longa);
}
