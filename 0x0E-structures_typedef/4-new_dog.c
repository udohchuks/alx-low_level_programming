#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog struct
 * @name: nam eof new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
