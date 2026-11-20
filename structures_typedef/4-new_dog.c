#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
	char *dog_name;
	char *dog_owner;
	unsigned int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = malloc(strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = malloc(strlen(owner) + 1);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dog_name[i] = name[i];
	dog_name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		dog_owner[i] = owner[i];
	dog_owner[i] = '\0';

	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
