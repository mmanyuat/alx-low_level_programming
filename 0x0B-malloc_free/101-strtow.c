#include "main.h"
#include <stdlib.h>

int word_search(char *str);
int count_words(char *str);
char **strstow(char *str);

/**
 * word_search - function to search for indexing mark
 * @str:the string to be searched
 * Return:the indexing mark
 */

int word_search(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
	len++;
	i++;
	}
	return (len);
}

/**
 * word_count - function to count the number of words
 * @str:the string to be counted
 * Return:the words
 */

int word_count(char *str)
{
	int i = 0, word = 0, len = 0;

	for (i = 0; *(str + i); i++)
	len++;
	for (i = 0; i < len; i++)
	{
	if (*(str + i) != ' ')
	{
	word++;
	i += word_search(str + i);
	}
	}
	return (word);
}

/**
 * strtow - function to split string
 * @str:the string
 * Return:the split
 */

char **strtow(char *str)
{
	char **ptr;
	int i = 0, words, x;
	int letters, y;

	if (str == NULL || str[0] == '\0')
	return (NULL);
	words = word_search(str);
	if (words == 0)
	return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
	return (NULL);
	for (x = 0; x < words; x++)
	{
	while (str[i] == ' ')
	i++;
	letters = word_search(str + i);
	ptr[x] = malloc(sizeof(char) * (letters + 1));
	if (ptr[x] == NULL)
	{
	for (; x >= 0; x--)
	free(ptr[x]);
	free(ptr);
	return (NULL);
	}
	for (y = 0; y < letters; y++)
	ptr[x][y] = str[i++];
	ptr[x][y] = '\0';
	}
	ptr[x] = NULL;
	return (ptr);
}
