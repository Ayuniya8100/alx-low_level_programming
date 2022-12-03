#include "main.h"
/**
 * print_binary - print binary number
 * @n: the number that changed t binary
 */
void print_binary(unsigned long int n)
{
	int c;
	unsigned int mask = 1 << 31;

	for (c = 1; c <= 32; ++c)
	{
		_putchar(n & mask ? '1' : '0');
		n <<= 1;
	}
	_putchar ('\n');
}
