#include "main.h"

/**
 * _strchr - function for a program
 * @s:first value
 * @c: second value
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (&s[a]);
	}
	return (0);
}
