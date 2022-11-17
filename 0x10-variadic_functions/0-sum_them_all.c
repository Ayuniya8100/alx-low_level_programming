#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - print sum using variadic function
 * @n: first list of the function
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(add, int);
			sum = sum + x;
	}
	va_end(add);

	return (sum);
}
