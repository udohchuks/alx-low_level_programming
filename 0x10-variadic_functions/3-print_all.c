#include "variadic_functions.h"
#include <string.h>
/* define all the format function */

/**
 * func_int - prints an integer
 * @ptr: va_list ptr
 */
void func_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
/**
 * func_char - prints an character
 * @ptr: va_list ptr
 */

void func_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}
/**
 * func_float - prints an float
 * @ptr: va_list ptr
 */

void func_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
/**
 * func_str - prints an string
 * @ptr: va_list ptr
 */

void func_str(va_list ptr)
{
	char *str;

	str = va_arg(ptr, char*);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * func_format: pointer to functions
 * @len: length of string
 */
void print_all(const char * const format, ...)
{
	va_list ptr;

	va_start(ptr, format);
	form format_attr[5] = {
		{'c', func_char},
		{'i', func_int},
		{'f', func_float},
		{'s', func_str},
		{'\0', NULL}
	};
	int i, j;
	char *sp, *sp2;

	sp = "", sp2 = ", ";
	i = 0;
	while (format_attr[i].f != NULL && format[i] != '\0')
	{
		j = 0;
		while (format_attr[j].c != '\0')
		{
			if (format[i] == format_attr[j].c)
			{
				printf("%s", sp);
				format_attr[j].f(ptr);
				sp1 = sp2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
