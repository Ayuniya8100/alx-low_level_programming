#include "main.h"
/**
 * _isdigit - check if a char is a digit
 * @c: int to be checked
 * Return: if c is digit 0 otherwise 1
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
