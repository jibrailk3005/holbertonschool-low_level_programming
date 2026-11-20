
#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - Creates a copy of a string
 * @str: String to copy
 *
 * Return: Pointer to the copied string, or NULL if it fails
 */
static char *copy_string(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = copy_string(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = copy_string(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

