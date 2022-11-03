#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print string by recursion
 * @s: strint to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_puts_recursion(s);
	puts(s);
	}
}
