#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - function to get operator
 * @s:the operator passed as an argument
 * Return:pointer to the operator that corresponds
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{" + ", op_add},
	{" - ", op_sub},
	{" * ", op_mul},
	{" / ", op_div},
	{" % ", op_mod},
	{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
	if (*(ops[i].op) == *s && *(s + 1) == '\0')
	return (ops[i].f);
	i++;
	}
	return (NULL);
}
