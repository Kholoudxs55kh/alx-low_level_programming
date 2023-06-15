#include "lists.h"
/**
 * print_dlistint - .
 * @h: .
 * Return: .
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
