#include "main.h"
/**
  * _isupper - checks upper case alphabet
  * @c: character to be checked
  * Return: 0 or 1 it depend on condition
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
