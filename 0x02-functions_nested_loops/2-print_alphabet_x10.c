#include "main.h"
/**
 * print_alphabet_x10 - print lower casealphabet ten time
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int lc;

	for (x = 0; x < 10; x++)
	{
	for (lc  = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');

	}
}
