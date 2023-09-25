#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string
 * @s:the intended string
 * Return:the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - fnction to compare
 * @s:the string
 * @n1:smallest iterator
 * @n2:biggest number
 * Return: nothing
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
	return (1);
	return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a stirng is a palindrome
 * @s:string
 * Return: 1 if p 0 otheriwse
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
