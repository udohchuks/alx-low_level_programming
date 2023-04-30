#include "lists.h"
/**
 * free_listint2 - free memory
 * @head: pointer pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
	else
		return;
	free(*head);
	*head = NULL;
}
