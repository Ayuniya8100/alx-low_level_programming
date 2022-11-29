#include "lists.h"
/**
 * print_list - to print list of element
 * @h: head of the nood
 * Return: return number of noode
 */

size_t print_list(const list_t *h)
{
	const list_t  *temp;
	int len;

	temp = h;
	if (temp != NULL)

		while (temp->next != NULL)
		{
			if (temp->str == NULL)
			{
				printf("->[0](nil)\n");
			}
			else
			{
				printf("%s->", temp->str);
			}

		len++;
		temp = temp->next;
	}
	return (len);
}
