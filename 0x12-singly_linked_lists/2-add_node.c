#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: .
 * @str: .
 * Return: p or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
