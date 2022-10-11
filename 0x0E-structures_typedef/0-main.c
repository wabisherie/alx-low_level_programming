#include "dog.h"
#include <stdio.h>

/**
 * main -check code ya source
 *
 * struct my_dog - info about dog
 *
 * @name: name
 * @age: how old
 * @owner: owner
 *
 * Return: 0
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Cherise";
	my_dog.age = 2.5;
	my_dog.owner = "Wabi";

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
