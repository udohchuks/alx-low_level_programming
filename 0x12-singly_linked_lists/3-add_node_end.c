#include "lists.h"
/**
 * add_node_end - function that adds new node at the end of a list_t.
 * @head: head of list
 * @str: string
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	int i = 0;

	while (str[i] != '\0')
		i++;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = tmp;
		tmp->len = i;
		if (str == NULL)
			tmp->str = NULL;
		else
			tmp->str = strdup(str);
		tmp->next = NULL;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	if (str == NULL)
	{
		tmp->str = NULL;
		tmp->len = 0;
		tmp->next = NULL;
		ptr->next = tmp;
	}
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = NULL;
	ptr->next = tmp;
	return (tmp);
}
