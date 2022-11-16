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
		printf("Name: (nil)");
	else if (d->age == 0)
		printf("(nil)");
	else if (d->owner == NULL)
		printf("(nil)");
}
