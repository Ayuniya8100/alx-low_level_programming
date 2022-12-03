#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - change binary to decimal
 * @b:  pointer to binary numbers
 * Return: return 0 or sum;
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int power = 0;
	unsigned int sum = 0;
	unsigned int value;
	const char *s;

	s = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	while (b >= s)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = *b - '0';
		value = i * (1 << power);
		sum = sum + value;
		b--;
		power++;
	}
	return (sum);
}
