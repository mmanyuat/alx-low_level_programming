#include <stdio.h>
#include "main.h"

/**
 * _strchr - function to locate a character in string
 * @s:the string
 * @c:the character
 * Return:the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
