#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: success
*/

void print_dog(struct dog *d, int age, char *name, char *owner)
{
	printf("%d %s %s", d->age, d->name, d->owner);
}
