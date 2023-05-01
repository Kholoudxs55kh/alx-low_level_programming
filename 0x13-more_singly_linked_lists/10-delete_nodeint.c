#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: .
 * @index: .
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *Cnew = *head;
	unsigned int node;

	if (Cnew == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(Cnew);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (Cnew->next == NULL)
			return (-1);

		Cnew = Cnew->next;
	}

	tmp = Cnew->next;
	Cnew->next = tmp->next;
	free(tmp);
	return (1);
}
