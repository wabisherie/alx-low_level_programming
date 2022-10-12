#ifndef DOG_H
#define DOG_H
/**
 * struct dog - details about the dog are here
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
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
