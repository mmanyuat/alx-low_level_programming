#include "function_pointers.h"

/**
 * print_name - A function to print out a name
 * @name:pointers to the function
 * @f:function pointer
 * Return:nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
