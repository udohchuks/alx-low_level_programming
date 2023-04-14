#include "main.h"
/**
 * _realloc - realloc
 * @ptr: pointer to prev mem location
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to char
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		free(ptr);
		return (ptr2);
	}
	if (new_size > old_size)
	{
		ptr = realloc(ptr, new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
