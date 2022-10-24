#include "main.h"
/**
 * _strlen - function to get the length of string
 * @s: string of pointer that pass the function
 * Return: always length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
