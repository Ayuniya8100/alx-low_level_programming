#include <stdio.h>
/**
  * main - entry point
  * Description: prints size of computer data type
  * Return: Return 0
  */
int main(void)
{
	printf("size of a char: %zu byte(s) \n", sizeof(char));
	printf("size of a int: %zu byte(s) \n", sizeof(int));
	printf("size of a int long: %zu byte(s) \n", sizeof(int long));
	printf("size of a int long long: %zu byte(s) \n", sizeof(int long long));
	printf("size of a float: %zu byte(s) \n", sizeof(float));

	return (0);
}
