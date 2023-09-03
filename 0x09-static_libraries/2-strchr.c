#include "main.h"

/**
 * _strchr - string entry
 * @s:the string
 * @c:the value
 * Return:nothing
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
