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
	char  *ptr2;

	if (ptr == NULL)
		ptr2 = malloc(new_size);
	if (new_size > old_size)
		ptr2 = realloc(ptr, new_size);
	if (new_size == old_size)
	{
		ptr2 = ptr;
		free(ptr);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	return (ptr2);
}
