#include "main.h"

/**
 * _strlen - program to check string length
 * @s:the string
 * Return:the length
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
