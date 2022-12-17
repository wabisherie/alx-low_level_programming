#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: returns an int less than, equal to or greater than 0 respectively
 * if s1 is found to be the same as s2
 *return 0 if s1 == s2
 *return - if s1 < s2
 *return + if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
	if (s1[i] == '\0' && s2[i] == '\0')
		break;

	else if (s1[i] == '\0')
	{
		diff = s2[i];
		break;
	}
	else if (s2[i] == '\0')
	{
		diff = s1[i];
		break;
	}
	else if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
		break;
	}
	else
		i++;
	}

	return (diff);
}
