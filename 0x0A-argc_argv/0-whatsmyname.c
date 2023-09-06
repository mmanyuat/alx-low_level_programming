#include <stdio.h>

/**
 * main - program to print program`s name
 * @argc:the argument count
 * @argv:the argument vector
 * Return:Nothing
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
