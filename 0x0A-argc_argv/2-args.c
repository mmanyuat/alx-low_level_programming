#include <stdio.h>

/**
 * main - program to print all arguments it recieves
 * @argc:the argument count
 * @argv:the argument vector
 * Return:nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	printf("\n");
	}
	return (0);
}
