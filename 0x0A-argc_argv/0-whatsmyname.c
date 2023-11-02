#include <stdio.h>

/**
 * main - program to print the name of program
 * @argc:the argument count
 * @argv:the argument vector
 * Return:nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[0]);
	}
	printf("\n");
	return (0);
}
