#include <stdio.h>
/**
 * main - entry level
 * Return: always zero
 */
int main(void)
{
	int i, n;

	long int s1 = 1, s2 = 2, sum = 0;

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			s1 = s2;
			s2 = sum;
			sum = s1 + s2;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
