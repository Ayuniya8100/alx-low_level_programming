#include <stdio.h>
/**
 * main - print lower case alphabet
 * followed by newline except e and q
 * Return: return 0
  */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}

