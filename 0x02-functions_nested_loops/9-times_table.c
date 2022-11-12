#include "main.h"

/**
  *times_table -> time table
  */
void times_table(void)
{

	int x, y, k = 0;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			k = x * y;
			if (k <= 9)
				_putchar(' ');
			else
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
