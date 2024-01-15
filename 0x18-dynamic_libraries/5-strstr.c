#include "main.h"

/**
 * _strstr - program start point
 * @haystack: the value
 * @needle:the second value
 * Return:always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *a = haystack;
	char *b = needle;

	while (*a == *b && *b != '\0')
	{
	a++;
	b++;
	}
	if (*b == '\0')
	return (haystack);
	}
	return (0);
}
