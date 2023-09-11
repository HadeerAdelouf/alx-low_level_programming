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
	for (namelength = 0; name[namelength]; namelength++)
		;
	namelength++;
	dog->name = malloc(namelength * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelength; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ownerlength = 0; owner[ownerlength]; ownerlength++)
		;
	ownerlength++;
	dog->owner = malloc(ownerlength * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlength; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
