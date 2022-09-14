#include "main.h"

/**
 * main - prints _putchar to the output
 *
 *Description - main prints letters out
 * return = Always 0 (Success)
 *
 */

int main(void)
{
	char word[10] = "_putchar\n";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar(10);
	return (0);
}
