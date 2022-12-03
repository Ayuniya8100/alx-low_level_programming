#include "main.h"
/**
 * print_binary - print binary number
 * @n: the number that changed t binary
 */
void print_binary(unsigned long int n)
{
	int c, count = 0;
	unsigned long int mask;

	for (c = 1; c <= 32; ++c)
	{
		mask = n << c;

		if (mask & 1)
		{
			_putchar('1');
			mask++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
	_putchar ('0');
}
