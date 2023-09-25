#include "main.h"

/**
 * is_palindrome_helper - function to help
 * @s:the char
 * @start:the start
 * @end: the end
 * Return: 0 or -1
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	return (1);
	if (s[start] != s[end])
	return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - function to check whether its palindrome
 * @s:the char
 * Return:s or -1
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	return (is_palindrome_helper(s, 0, len - 1));
}
