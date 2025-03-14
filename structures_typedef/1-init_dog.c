#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog to initialize
* @name: Name to initialize
* @age: Age to initialize
* @owner: Owner to initialize
*
* Description: This function takes a pointer to a struct dog and initializes
* its members with the provided values.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
