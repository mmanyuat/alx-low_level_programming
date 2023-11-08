#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name:the name of the variable
 * @f:a function pointer
 * Return:nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	return;
	f(name);
}
