#include "main.h"
/**
 * print_binary - print binary number
 * @n: the number that changed t binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int x;

	for (i = 31; i >= 0; i--)
	{
		x = n & (1 << i);

		if (x == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
