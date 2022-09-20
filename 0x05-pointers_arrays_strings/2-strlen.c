#include "main.h"
/**
 * _strlen - show length of string
 *
 * @s: pointer to string being length checked
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
