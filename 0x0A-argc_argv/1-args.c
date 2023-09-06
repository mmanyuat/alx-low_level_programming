#include <stdio.h>

/**
 * main - program to print nmbber of argument
 * @argc:the counter
 * @argv:the vector
 * Return:nothing
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
