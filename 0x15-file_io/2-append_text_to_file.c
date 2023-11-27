#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function to append text to a file end
 * @filename:the name of the file
 * @text_content: the content of the file
 * Return: 1 unpon success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	return (-1);
	fptr = fopen(filename, "a");
	if (fptr == NULL)
	return (-1);
	if (text_content != NULL)
	{
	fprintf(fptr, "%s", text_content);
	}
	fclose(fptr);
	return (1);
}
