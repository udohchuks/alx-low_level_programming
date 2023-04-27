#include "lists.h"
/**
 * list_len - prints list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
