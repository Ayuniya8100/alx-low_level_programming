#include <stdio.h>
/**
 * main - print lower case alphabet
 * followed by newline except e and q
 * Return: return 0
  */
int main(void)
{
	char la;

	la  = 'a';
	while (la <= 'z')
	{
		if (la != 'e' && la != 'q')
		putchar(la);
		la++;
	}
	putchar('\n');
	return (0);
}
