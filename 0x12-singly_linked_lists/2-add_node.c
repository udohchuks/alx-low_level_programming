#include "lists.h"
/**
 * add_node: adds node
 * @head: head of list
 * @str: string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(list_t));
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
