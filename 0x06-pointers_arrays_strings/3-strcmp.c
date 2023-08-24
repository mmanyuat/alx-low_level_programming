#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: the first string
 * @s2: the string
 * Return: the greater or least one
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1  == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
