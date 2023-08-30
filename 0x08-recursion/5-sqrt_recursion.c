#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - suare root
 * @n:the number
 * Return:the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates
 * @n: the num
 * @i:iteration
 * Return:nothing
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}
	return (_sqrt(n, i + 1));
}
