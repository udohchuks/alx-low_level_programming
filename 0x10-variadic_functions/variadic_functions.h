#ifndef FUNC_H
#define FUNC_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct forms
{
	char c;
	void (*f)(va_list);
} form;
#endif
