#include "main.h"

/**
  *times_table -> time table
  */
void times_table(void)
{

	int x, y, k;


	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			k = x * y;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
