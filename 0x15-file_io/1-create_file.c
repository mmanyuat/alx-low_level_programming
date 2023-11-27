#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename:refers to the name of the file
 * @text_content: the content of the file
 * Return: 0 for fail and 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	return (-1);
	fptr = fopen(filename, "w");
	if (fptr == NULL)
	return (-1);
	if (text_content != NULL)
	{
	fprintf(fptr, "%s", text_content);
	}
	fclose(fptr);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	return (-1);
	return (1);
}
