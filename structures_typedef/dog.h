#ifndef DOG_H
#define DOG_H

/**
* struct dog - A structure representing a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Description: This structure contains information about a dog,
* including its name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
