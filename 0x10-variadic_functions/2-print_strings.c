#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - to print string
 * @n: number of argument
 * @separator: to separate argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int counter;

	va_start(my_list, n);
	for (counter = 0; counter < n; counter++)
	{
		char *s;

		s = va_arg(my_list, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}
