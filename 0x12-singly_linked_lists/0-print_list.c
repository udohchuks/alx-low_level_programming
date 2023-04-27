#include "lists.h"
/**
 * print_list - prints list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		count++;
		h = h->next;
		printf("\n");
	}
	return (count);
}
