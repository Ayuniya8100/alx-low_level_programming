#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: parameter
 * Return: return n
 */
int print_last_digit(int n)
{
	if (n < 0)

		n = -n;
	return (n % 10);
}
