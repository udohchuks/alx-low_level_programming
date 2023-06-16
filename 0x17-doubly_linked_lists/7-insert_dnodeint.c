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
	dlistint_t *new, *ptr;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* loop until nth node of idx */
	ptr = *h;
	while (idx > 1 && ptr && ptr->next)
	{
		ptr = ptr->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 1 || ptr == NULL)
		return (NULL);

	/* assign value to new node */
	new->n = n;

	/* insert node */
	if (ptr->next != NULL)
		ptr->next->prev = new;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
