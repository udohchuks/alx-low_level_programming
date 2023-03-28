#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int i, len, mid;

	char temp;

	len = strlen(s) - 1;
	mid = (len / 2);
	for (i = 0; i <= mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
