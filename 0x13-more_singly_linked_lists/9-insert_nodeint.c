#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: .
 * @idx: .
 * @n: .
 * Return: NULL or p
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *Cnew = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = Cnew;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (Cnew == NULL || Cnew->next == NULL)
			return (NULL);

		Cnew = Cnew->next;
	}

	new->next = Cnew->next;
	Cnew->next = new;

	return (new);
}
