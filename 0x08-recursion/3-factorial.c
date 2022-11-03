#include "main.h"
/**
 * factorial - print factorials of n
 * @n: natural number
 * Return: 0 ,-1 or n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
