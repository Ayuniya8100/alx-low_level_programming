#include <stdio.h>
/**
  * main - print lower case and upper case alphabet
  *Return: return 0
  */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
