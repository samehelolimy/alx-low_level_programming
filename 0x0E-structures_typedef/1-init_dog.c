#include "dog.h"
/**
 * init_dog - initialize a variable of type struct
 * @d: my dog
 * @name: character
 * @age: dog age
 * @owner: dog owner
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