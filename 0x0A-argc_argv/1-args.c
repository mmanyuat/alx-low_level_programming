#include <stdio.h>

/**
 * main - program to print nuumber of arguments passed
 * @argc:argument count
 * @argv:the argument vector
 * Return:nothing
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc);
	printf("\n");
	return (0);
}
