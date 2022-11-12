#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int i;
	long int num1 = 0, num2 = 1;
	long int num3  = num1 + num2;

	for (i = 1; i <= 50; i++)
	{
		if (num3 != 20365011074)
			printf("%lu, ", num3);
		else
			printf("%lu", num3);
			num1 = num2;
			num2 = num3;
			num3 = num1 + num2;
	}
	return (0);
}
