#include "main.h"
/**
 * _memcpy - print copy of character
 * @dest: adress where copy the file
 * @src: adress where copied from
 * @n: size of value to be copied
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
