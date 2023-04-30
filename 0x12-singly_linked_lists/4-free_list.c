#include "lists.h"
/**
 * free_list - free list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(ptr);
		free(ptr->str);
	}
}