#include "lists.h"
/**
 * free_listint
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
