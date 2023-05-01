#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at idx
 * @head: pointer pointer to head
 * @index: idx
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1, *ptr2;
	unsigned int i = 1, size = 0;


	if (*head == NULL)
		return (-1);
	ptr1 = *head;
	while (ptr1 != NULL)
	{
		size++;
		ptr1 = ptr1->next;
	}
	ptr1 = *head;
	ptr2 = (*head)->next;
	if (index > size)
		return (-1);
	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		ptr1 = NULL;
		return (1);
	}
	while (i < index)
	{
		ptr1 = ptr2;
		ptr2 = ptr2->next;
		i++;
	}
	ptr1->next = ptr2->next;
	free(ptr2);
	ptr2 = NULL;
	return (1);
}
