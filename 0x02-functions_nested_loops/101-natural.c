#include <stdio.h>
/**
  * main - check the code
  * Return: always zero
  */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + 1;

	}
	printf("%d\n", sum);
	return (0);
}
