#include "dog.h"
#include <stdio.h>
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

int main(void)

{
	struct dog dog_t;

	dog_t.name = "Poppy";
	dog_t.age = 3.5;
	dog_t.owner= "Bob";
	return (0);
}
