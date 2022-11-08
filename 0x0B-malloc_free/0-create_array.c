#include "main.h"
/**
 * create_array - create a series of array
 * @size: size of the array
 * @c: character
 * Return: return s,
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char*)malloc(size * sizeof(char));
		if (s == NULL)
		{
		return (NULL);
		}
	if (size == 0)
	{
	return ('\0');
	}

	i = 0;
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	return (s);
}
