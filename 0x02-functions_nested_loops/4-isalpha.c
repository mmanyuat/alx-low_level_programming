#include "main.h"

/**
 * _isalpha - print out letters
 * @c: the letter
 * Return: 1 for letters 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
