#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of the struct
 * @name:member of the name
 * @age:the age of the dog
 * @owner:name of the dog`s owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int str_len(char *str);
void str_copy(char *dest, char *src);
#endif
