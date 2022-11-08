#include "main.h"
/**
 * _strlen - to print length of string
 * @s: string
 * Return: return 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy string
 * @dest: parameter
 * @src: parameter
 * Return: return desk
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - dupilicate array to malloc
 * @str: name of arrray
 * Return: return dest
 *
 */
char *_strdup(char *str)
{
	char *dst;

	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst =  (char *)malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);

	free(dst);
}
