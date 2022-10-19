#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: parameter
 * Return: return n
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)

		n = -n;

	_putchar(x + '0');

	return (x);
}
