#include "main.h"
/**
 * print_alphabet - print all alphabet in lower case
 * Return: always 0
 */
void print_alphabet(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}


