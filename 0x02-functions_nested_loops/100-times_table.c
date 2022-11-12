#include "main.h"
/**
 * print_times_table - print time table
 * @n: natural number
 */

void print_times_table(int n)
{
	int i, j, k = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n > 0 && n < 15)
			{
				if (j == 0)
					_putchar(k + '0');
				else if (j != 0 && k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar((k % 100) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
