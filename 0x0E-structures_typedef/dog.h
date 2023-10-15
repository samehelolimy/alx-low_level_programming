#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: name
 * @age: age
 * @owner: its owner
 * Description: just a dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
