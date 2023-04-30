#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a specified position
 * @head: pointer pointer to head
 * @idx: index
 * @n: integer
 * Return: addr of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *ptr;
	unsigned int num_node = 1, i = 1;

	ptr = *head;
	while (ptr != NULL)
	{
		num_node++;
		ptr = ptr->next;
	}
	ptr = *head;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (num_node == idx)
		add_nodeint_end(head, n);
	else if (idx > 0 && idx < num_node)
	{
		while (i < idx)
		{
			ptr = ptr->next;
			i++;
		}
		node->next = ptr->next;
		ptr->next = node;
	}
	else
		return (NULL);
	return (node);
}
