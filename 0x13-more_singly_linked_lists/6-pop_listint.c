#include "lists.h"
/**
 * pop_listint - pop node
 * @head: ptr ptr to head
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr;

	if (*head == NULL)
		return (n);
	ptr = *head;
	*head = (*head)->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
