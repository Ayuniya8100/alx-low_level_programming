#include "main.h"
/**
 * _strchr - check the string for char c
 * @s: the string to be checked
 * @c: the character
 * Return: the s or null
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return ('\0');
		}
	}
}
