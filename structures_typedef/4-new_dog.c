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

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
