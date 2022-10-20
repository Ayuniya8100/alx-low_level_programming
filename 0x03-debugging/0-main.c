#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * positive_or_negative - prints if integer is positive or negative
  * Return: 0
  * @i: parameter
  */

void positive_or_negative(int i)
{
	int n;

		srand(time(0));
		n = i;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
}
/**
 * main - debugging example
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
