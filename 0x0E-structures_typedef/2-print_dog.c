#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the dog struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %1f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
