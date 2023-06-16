#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node = head;

	if (head)
	{
		while (node != NULL)
		{
			if (count == index)
			{
				return (node);
			}
			node = node->next;
			count++;
		}
	}
	return (NULL);
}
