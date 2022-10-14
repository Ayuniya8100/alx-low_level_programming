#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - entry point
  * Description: prints 0,negative or posative numbers
  * Return: return 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive number");
	}
	else if (n == 0)
	{
		printf("n is zero");
	}
	else
		printf("n is negative number");
	return (0);
}
