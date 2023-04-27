#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
/**
 * list_t - struct of a node
 * @str: string
 * @len: lenght of string
 * @next: pointer to next node
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
