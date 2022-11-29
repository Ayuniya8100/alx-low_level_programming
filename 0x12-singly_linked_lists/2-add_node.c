#include "lists.h"
#include <string.h>
/**
 * add_node - add node at first
 * @head: head
 * @str: stiring
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	char *s;
	int len;

	s = strdup(str);

	add = (list_t *)malloc(sizeof(list_t));

	if (add == NULL && s == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
	{
		add->str = s;
		add->len = len;
		add->next = *head;
		*head = add;
	}
	return (add);
}
