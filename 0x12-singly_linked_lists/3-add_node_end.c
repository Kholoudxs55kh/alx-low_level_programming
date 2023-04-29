#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: .
 * @str: .
 * Return: p or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	unsigned int len = 0;


	ptr = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
