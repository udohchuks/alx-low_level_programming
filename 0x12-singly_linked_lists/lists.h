#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
/**
 * struct list_ts - struct node
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 * Description: create a node
 */
typedef struct list_ts
{
	char *str;
	char len;
	struct list_ts *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
