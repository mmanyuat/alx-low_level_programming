#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - return if a number is a prime
 * @n: the number to be checked
 * Return:the prime number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - return if a number is a prime
 * @n: the integer
 * @i: the iteration
 * Return:nothing
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);
	if ((n / i) < i)
	return (1);
	return (check_prime(n, i + 1));
}
