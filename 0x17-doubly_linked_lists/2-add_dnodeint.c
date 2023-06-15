#include "lists.h"
/**
 * add_dnodeint - .
 * @h: .
 * @n: .
 * Return: .
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t*)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (*head);
}
