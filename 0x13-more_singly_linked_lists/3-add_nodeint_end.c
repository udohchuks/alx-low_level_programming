#include "lists.h"
/**
 * add_nodeint_end - adds node ar the end of the list
 * @head: pointer pointer to head
 * @n: integer
 * Return: addr of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr;
	int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	ptr = *head;
	while (ptr->next != NULL && count != 5)
	{
		ptr = ptr->next;
		count++;
	}
	ptr->next = node;
	return (node);
}

