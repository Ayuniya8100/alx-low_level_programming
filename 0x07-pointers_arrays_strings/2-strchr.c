#include "main.h"
/**
 * _strchr - check the string for char c
 * @s: the string to be checked
 * @c: the character
 * Return: the s or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)

		{
			return (s);

		}
		s++;
	}
	return ('\0');
}
