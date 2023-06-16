#include "lists.h"
/**
 * free_dlistint - free lists
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
