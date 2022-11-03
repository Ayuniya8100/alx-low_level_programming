#include "main.h"
/**
 * _pow_recursion - print power function
 * @x: parameters
 * @y: parameters
 * Return: -1, 1, value of y
 */

int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		a  = _pow_recursion(x, y / 2);
		return (a * a);
	}
	else
		return (x * _pow_recursion(x, y - 1));

}
