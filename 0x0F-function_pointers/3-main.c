#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main func
 * @argc:the argument number
 * @argv:the argumet name
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
	printf("Error\n");
	return (99);
	}
	printf("%d", func(num1, num2));
	return (0);
}
