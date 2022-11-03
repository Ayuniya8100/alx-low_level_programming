#include "main.h"
/**
 * _strlen_recursion - print len of string
 * @s: string
 * Return: 0 or s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
