#include "lists.h"
/**
 * add_dnodeint_end - adds at the end
 * @head: head
 * @n: number
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *crnt;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	crnt = *head;
	if (*head == NULL)
		*head = ptr;
	else
	{
		while (crnt->next != NULL)
			crnt = crnt->next;
		crnt->next = ptr;
		ptr->prev = crnt;
	}
	return (*head);
}
