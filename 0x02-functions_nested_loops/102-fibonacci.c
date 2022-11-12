#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned int num1 = 0, num2 = 1;
	unsigned int num3  = num1 + num2;

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}
	return (0);
}
