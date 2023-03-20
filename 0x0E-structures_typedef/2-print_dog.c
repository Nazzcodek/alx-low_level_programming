#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A functionthat print dog
 *
 * @d: pointer to dog structure
 *
 * Return: Dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		return (nil);
	if (d->age == NULL)
		return (nil);
	if (d->owner == NULL)
		return (nil);

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
