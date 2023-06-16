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

	dlistint_t *ptr = *h;
	dlistint_t *ptr2 = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	while (idx != 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	ptr2 = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	if (ptr2 != NULL)
		ptr2->prev = new_node;

	return (*h);
}
