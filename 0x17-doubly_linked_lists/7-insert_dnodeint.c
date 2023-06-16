#include "lists.h"
/**
 * insert_dnodeint_at_index - .
 * @h: .
 * @idx: .
 * @n: .
 * Return: .
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_data = *h, *new_node;
	unsigned int i = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if ((!new_node) || (!h))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (new_data && i < idx - 1)
	{
		new_data = new_data->next;
		i++;
	}
	if (!new_data)
		return (NULL);
	new_node->n = n;
	new_node->prev = new_data;
	new_node->next = new_data->next;

	if (new_data->next)
		new_data->next->prev = new_node;
	new_data->next = new_node;

	return (new_node);
}
