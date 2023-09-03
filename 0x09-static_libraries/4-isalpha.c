#include "main.h"

/**
 * _isalpha - checks for alphabbetics
 * @c:the characters
 * Return:1 for letter 0 for anything else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
