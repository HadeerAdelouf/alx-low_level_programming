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
    dog_t *newDog = malloc(sizeof(dog_t));
    if (newDog == NULL) 
    {
        return NULL;
    }
    newDog->name = strdup(name);
    newDog->age = age;
    newDog->owner = strdup(owner);
    return newDog;
}
