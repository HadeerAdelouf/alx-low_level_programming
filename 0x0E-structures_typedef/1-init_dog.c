#include "dog.h"
/**
 * init_dog -initialize a variable of type struct dog
 * @name:name of the dog
 * @age:age of the dog
 * @d:pointer to structure
 * @owner:owner of the dog
 * Return : void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
