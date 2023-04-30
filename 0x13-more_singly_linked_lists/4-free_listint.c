#include "lists.h"
/**
 * free_listint - free memory
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
