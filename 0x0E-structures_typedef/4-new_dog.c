#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - copies the string given as a parameter
 * @str: the string to copy
 *
 * Return: the copied string, NULL in failure
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL in failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if(new == NULL)
		return (NULL);

	ncpy = _stdup(name);
	if (!ncpy && name)
	{
		free(ncpy);
		free(new);
		return (NULL);
	}

	new->name = ncpy;
	new->age = age;
	new-owner = owner;

	return (new);
}
