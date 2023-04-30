#include "lists.h"
/**
 * listint_len- return lenght of list
 * @h: head pointer
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
