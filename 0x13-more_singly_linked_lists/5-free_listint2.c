#include "lists.h"
/**
 * free_listint2 - free memory
 * @head: pointer pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
	*head = NULL;
}
