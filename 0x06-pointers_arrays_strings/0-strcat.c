#include "main.h"

/**
 *_strcat - appends src to destination
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: *ptr
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[j] = '\0';

	return (dest);
}
