#include <stdlib.h>
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
	unsigned int name_len;
	unsigned int owner_len;

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = malloc(name_len + 1);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = malloc(owner_len + 1);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		dog_name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		dog_owner[i] = owner[i];

	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
