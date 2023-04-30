#include "lists.h"
/**
 * get_nodeint_at_index - returns node at specific index
 * @head: ptr ptr to head
 * @index: idx
 * Return: addr of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int size = 1, i = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	ptr = head;
	if (index > 0 && index <= size)
	{
		while (index <= size && ptr != NULL)
		{
			if (i == index)
			{
				return (ptr);
			}
			i++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}



