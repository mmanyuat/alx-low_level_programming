#include "main.h"
/**
 * factorial - function to print factorial of a number
 * @n:the number
 * Return: -1, 1, and the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	return (n * factorial(n - 1));
}
