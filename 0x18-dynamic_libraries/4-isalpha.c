#include "main.h"

/**
 * _isalpha - program to check for alphabet
 * @c: the character
 * Return: 1 if letter 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
