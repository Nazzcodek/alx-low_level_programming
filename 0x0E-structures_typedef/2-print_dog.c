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
		printf("Name: (nil)\n");
	if (d->age <= 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
