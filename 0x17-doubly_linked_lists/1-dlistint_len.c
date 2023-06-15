#include "lists.h"
/**
 * dlistint_len - .
 * @h: .
 * Return: .
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
