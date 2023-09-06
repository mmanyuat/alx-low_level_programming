#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to print sum of numbers
 * @argc:the counter
 * @argv:the vector
 * Return:nothing
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
