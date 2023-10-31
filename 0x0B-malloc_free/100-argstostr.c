#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concat arguments
 * @ac:integral argument
 * @av:character argument
 * Return:the pointer
 */

char *argstostr(int ac, char **av)
{
	int h = 0, i = 0, j = 0, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
	{
	while (av[i][j])
	{
	h++;
	j++;
	}
	j = 0;
	i++;
	}
	ptr = malloc((sizeof(char) * h) + ac + 1);
	i = 0;
	while (av[i])
	{
	while (av[i][j])
	{
	ptr[k] = av[i][j];
	k++;
	j++;
	}
	ptr[k] = '\n';
	j = 0;
	k++;
	i++;
	}
	k++;
	ptr[k] = '\0';
	return (ptr);
}
