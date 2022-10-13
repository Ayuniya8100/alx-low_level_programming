#include <stdio.h>
/**
  * main - entry point
  * Description: prints size of computer data type
  * Return: Return 0
  */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a int long: %zu byte(s)\n", sizeof(int long));
	printf("Size of a int long long: %zu byte(s)\n", sizeof(int long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
