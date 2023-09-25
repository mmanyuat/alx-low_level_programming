#include "main.h"

/**
 * is_palindrome - function to check whether its palindrome
 * @s:the char
 * Return:s or -1
 */

int is_palindrome(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	len++;
	if (len == 0 || len == 1)
	return (-1);
	if (s[0] != s[len - 1])
	return (0);
	for (i = 1; i < len - 1; i++)
	{
	if (s[i] != s[len - 1 - i])
	return (0);
	}
	return (1);
}
