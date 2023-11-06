#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates new dog
 * @name:name of the dog
 * @age:the age of the dog
 * @owner:the owner of the dog
 * Return:new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);
	new_dog->name = malloc(sizeof(char) * (str_len(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
	}
	str_copy(new_dog->name, name);
	str_copy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}

/**
 * str_len - function to calculate string length
 * @str:the tring
 * Return:the string length
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	len++;
	return (len);
}

/**
 * str_copy - function to copy strings
 * @dest:the destination file
 * @src:the source variable
 * Return:nothing
 */

void str_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
}
