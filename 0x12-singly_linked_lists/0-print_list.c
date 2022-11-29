#include "lists.h"
/**
 * print_list - to print list of element
 * @h: head of the nood
 * Return: return number of noode
 */

size_t print_list(const list_t *h)
{
	const list_t  *temp;
	int noode = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)

			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		noode++;
		temp = temp->next;
	}
	return (noode);
}
