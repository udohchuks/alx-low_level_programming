#include "lists.h"
/**
 * delete_dnodeint_at_index - delete
 * @head: head
 * @index: index
 * Return: -1 0r 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	current = *head;
	count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}

