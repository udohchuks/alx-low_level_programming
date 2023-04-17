#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the dog struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: nill\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %1f\n", d->age);
	else
		printf("Age: nill\n");
	if (d->owner == NULL)
		printf("Owner: nill\n");
	else
		printf("Owner: %s\n", d->owner);
}
