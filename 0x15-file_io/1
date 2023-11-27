#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function to read the text file
 * @filename:pointer to the file
 * @letters:the number of letters it should pritn
 * Return:the actual nmber of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t count = 0;
	char buffer[BUFSIZ];

	fp = fopen(filename, "r");
	if (fp == NULL)
	return (0);
	while (fgets(buffer, sizeof(buffer), fp) != NULL && count < letters)
	{
	puts(buffer);
	count++;
	}
	fclose (fp);
	return (count);
}
