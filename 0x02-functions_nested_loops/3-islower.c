#include "main.h"
/**
 * _islower - check if the character is lower case
 * @c: c is a ch racter
 * Return: ruturn 1 or 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
