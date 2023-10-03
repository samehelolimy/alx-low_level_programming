#include "main.h"
/**
 * _strlen - returns length of string
 * @s: is our parameter
 * Return: length of a string
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *s != '\0' ; s++)
		++counter;
	return (counter);
}
