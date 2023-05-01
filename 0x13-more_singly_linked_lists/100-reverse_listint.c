#include "lists.h"
/**
 * reverse_listint - reverses singly link list
 * @head: ptr ptr to head
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = NULL, *ptr2;

	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr1;
		ptr1 = *head;
		(*head) = ptr2;
	}
	*head = ptr1;
	return (*head);
}
