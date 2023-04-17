#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
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
	if (name == NULL || owner == NULL)
		return (NULL);

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
