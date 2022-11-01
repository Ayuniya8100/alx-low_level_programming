#include "main.h"
/**
 * _strchr - check the string for char c
 * @s: the string to be checked
 * @c: the character
 * Return: the s or null
 */

char *_strchr(char *s, char c)
{

	do {
		if (*s == c)
		{
			return (s);
		}
	}
	while (*s++);

	return ('\0');
}
