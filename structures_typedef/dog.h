#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with elements
 * @name: name of dog
 * @age: dog age
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that initialises a variable of type struct dog
 * @d: pointer to the variable struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
