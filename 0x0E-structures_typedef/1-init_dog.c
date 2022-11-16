#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - name of variables
 * @name: members of the structure
 * @age: members of the structure
 * @owner: members of the structure
 * @d: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
