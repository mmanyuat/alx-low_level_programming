#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function to conc all arguments
 * @ac:the num
 * @av:the argument
 * Return:nothing
 */

char *argstostr(int ac, char **av)
{
	int h = 0, i = 0, g = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
	{
	while (av[i][g])
	{
	h++;
	g++;
	}
	g = 0;
	i++;
	}
	s = malloc((sizeof(char) * h) + ac + 1);
	i = 0;
	while (av[i])
	{
	while (av[i][g])
	{
	s[k] = av[i][g];
	k++;
	g++;
	}
	s[k] = '\n';
	g = 0;
	k++;
	i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
