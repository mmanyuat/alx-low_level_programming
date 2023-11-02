#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concencate a string
 * @s1:the source
 * @s2:the destination
 * @n:the number of characters in n
 * Return:the pointer or NUll incase of error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}
	if (n >= len2)
	n = len2;
	ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
	ptr[len1 + i] = s2[i];
	}
	ptr[len1 + n] = '\0';
	return (ptr);
}
