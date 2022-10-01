#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 *
 *@argc : contains the count of char in hallo
 *
 *@argv: argument
 *
 * Return : 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
