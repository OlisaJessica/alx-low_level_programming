#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the struct dog
 * @d: variable to be printed
 * Return: if element of d is null return nil
 * if name is null, print Name: (nil))
 * if d is NULL print nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
