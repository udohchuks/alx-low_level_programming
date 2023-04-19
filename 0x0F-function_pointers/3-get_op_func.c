#include "3-calc.h"
/**
 * get_op_func - get operation
 * @s: operand
 * Return: result of operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	   };
	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
