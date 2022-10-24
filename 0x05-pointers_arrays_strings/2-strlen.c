#include "main.h"
/**
 * _strlen - function to get the length of string
 * @s: string of pointer that pass the function
 * Return: always length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
