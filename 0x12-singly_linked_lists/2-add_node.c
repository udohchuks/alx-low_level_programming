#include "lists.h"
/**
 * add_node - function that adds new node at the beginning of a list_t.
 * @head: head of list
 * @str: string
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
	{
		ptr->str = NULL;
		ptr->len = 0;
		ptr->next = *head;
		*head = ptr;
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
