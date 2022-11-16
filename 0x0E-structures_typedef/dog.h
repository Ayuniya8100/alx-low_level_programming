#ifndef DOG_H
#define DOG_H
/**
 * struct dog - its structure name
 * @name: 1st member of the structure
 * @age: 2nd member of the structure
 * @owner:3rd  member of the structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
