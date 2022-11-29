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

	add = (list_t *)malloc(sizeof(list_t));
	add->str = strdup(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		add->next = *head;
		*head = add;
	}
	return (*head);
}
