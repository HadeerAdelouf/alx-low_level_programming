#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *Return:NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelength, ownerlength, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (namelenght = 0; name[namelenght]; namelength++)
		;
	namelenght++;
	dog->name = malloc(namelength * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelenght; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ownerlenght = 0; owner[ownerlenght]; ownerlenght++)
		;
	ownerlenght++;
	dog->owner = malloc(ownerlenght * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlenght; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
