#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - print sum using variadic function
 * @n: first list of the function
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(valist, int);

		sum = sum + x;
	}
	va_end(valist);

	return (sum);
}
