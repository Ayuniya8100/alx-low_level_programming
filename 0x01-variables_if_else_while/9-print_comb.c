#include <stdio.h>
/**
 * main - print all combination of single digit
 * Return: always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			putchar(',');
		}
	}
		putchar('\n');
		return (0);
}



