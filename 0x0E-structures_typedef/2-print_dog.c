#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function name
 * @d: pointer
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);

	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)");
	else
		 printf("%s\n", d->owner);
}
