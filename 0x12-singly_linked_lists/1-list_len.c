#include "lists.h"
/**
 * list_len - length of element
 * @h: head
 * Return: return number of element
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
