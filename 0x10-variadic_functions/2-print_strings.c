#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if(str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
