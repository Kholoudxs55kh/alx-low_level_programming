#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Retirn: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int Retrn = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			Retrn++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			Retrn++;
		}
	}
	return (Retrn);
}
