#include <stdio.h>
/**
  * main - check the code
  * Return: always zero
  */
int main(void)
{
	unsigned int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 3 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
