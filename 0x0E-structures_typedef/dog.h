#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 * @name: name of day type string
 * @age: age of dog type float
 * @owner: dog owner type string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
