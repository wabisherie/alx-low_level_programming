#include "main.h"

/**
 * *malloc_checked- allocates memory 
 *
 * @b: 
 *
 * return: pointer and 0 (success)
 * 98 on failure and termination
 *
 */

void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);


	if (block == NULL)

		exit(98);

	return (block);
}
