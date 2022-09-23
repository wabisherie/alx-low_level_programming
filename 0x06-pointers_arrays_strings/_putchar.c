#include "main.h"
#include <unistd.h>

/**
 * _putchar - puts/ writes the char c to the std output
 *
 * @c : character to be printed
 *
 * Return: 1 on success and -1 on fail and set errno
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
