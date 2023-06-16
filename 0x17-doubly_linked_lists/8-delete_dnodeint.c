#include "lists.h"
/**
 * delete_dnodeint_at_index - .
 * @head: .
 * @index: .
 * Return: .
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *removed_data = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(removed_data);
		return (1);
	}
	while (removed_data && i < index - 1)
	{
		removed_data = removed_data->next;
		i++;
	}
	if (!removed_data)
		return (-1);

	removed_data->prev->next = removed_data->next;

	if (removed_data->next)
		removed_data->next->prev = removed_data->prev;

	free(removed_data);

	return (1);
}
