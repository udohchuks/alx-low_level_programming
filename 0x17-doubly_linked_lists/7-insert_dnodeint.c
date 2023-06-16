#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index
 * @h: head
 * @idx: index
 * @n: number
 * Return: head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;
	unsigned int count = 1;
	dlistint_t *ptr2 = NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	while (count != idx)
	{
		ptr = ptr->next;
		count++;
	}

	ptr2 = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	ptr2->prev = new_node;

	return (*h);
}

