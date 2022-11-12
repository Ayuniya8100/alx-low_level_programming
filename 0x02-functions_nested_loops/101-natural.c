#include <stdio.h>
/**
  * main - check the code
  * Return: always zero
  */
int main(void)
{
	int i;
	int a = 0;
	int b = 0;
	int sum = 0;

	for (i = 1; i <= 1024; i++)
	{
		a = i % 3;
		b = i % 5;

		if (a == 0 && b == 0)
		{
			sum = a + b;
			printf("%d, %d\n", a, b);
			printf("%d\n", sum);
		}
	}
	return (0);
}
