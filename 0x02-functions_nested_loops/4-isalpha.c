#include "main.h"
/**
 * _isalpha - checking for alphabet character
 * @c: c is character
 * Return: return 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
