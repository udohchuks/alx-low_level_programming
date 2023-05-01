#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at idx
 * @head: pointer pointer to head
 * @index: idx
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t ptr1, ptr2;
	unsigned int i, size = 0;


	if (*head == NULL)
		return (-1);
	ptr1 = *head;
	while (ptr1 != NULL)
	{
		size++;
		ptr1 += ptr->next;
	}
	if (index < 0 || index > size)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		return (1);
	}
	if (index == 0)
	{
		pop_listint(head);
	}
	ptr1 = *head;
	ptr2 = (*head)->next;
	while (i < index)
	{
		ptr1 = ptr2;
		i++;
	}
	ptr1->next = ptr2->next;
	free(ptr1);
	return (0);


