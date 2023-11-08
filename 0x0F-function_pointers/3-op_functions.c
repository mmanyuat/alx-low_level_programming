#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - function to add two input
 * @a:the first input
 * @b:the second input
 * Return:the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two numbers
 * @a:the first number
 * @b:the second number
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a:the first number
 * @b: the second number
 * Return:the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: the divsion of the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to find the remainder of two ints
 * @a:the first integer
 * @b:the second integer
 * Return:the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
