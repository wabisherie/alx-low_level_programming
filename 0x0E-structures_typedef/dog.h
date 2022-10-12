#ifndef DOG_H
#define DOG_H


/**
 * struct dog - struct with info about the dog
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 *  Description: struct called "dog" that stores its name, its age,
 *  its owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
