#include <stdio.h>
/**
 * main - alphabet with putchar
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 0; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
		return (0);
}
