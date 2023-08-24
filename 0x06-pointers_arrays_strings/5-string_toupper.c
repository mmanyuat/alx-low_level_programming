#include "main.h"
#include <ctype.h>

/**
 * string_toupper - string to convert lower case to uppercase
 * @str:string
 * Return:str
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (islower(*ptr))
	{
	*ptr = toupper(*ptr);
	}
	ptr++;
	}
	return (str);
}
