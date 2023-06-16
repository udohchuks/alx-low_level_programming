#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning
 * @head: addr of head
 * @n: number
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (*head);
}
