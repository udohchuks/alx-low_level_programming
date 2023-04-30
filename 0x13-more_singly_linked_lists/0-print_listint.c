#include "lists.h"
/**
 * print_listint - prints int of list
 * @h: head pointer
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
