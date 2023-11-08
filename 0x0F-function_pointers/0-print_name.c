#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print a name
 * @name:the name of the variable
 * @f:a function pointer
 * Return:nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
