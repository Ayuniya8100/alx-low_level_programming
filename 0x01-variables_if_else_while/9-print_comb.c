#include <stdio.h>
/**
 * main - print all combination of single digit
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
			putchar(i % 10 + '0');
		else
		{
			putchar(i % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
