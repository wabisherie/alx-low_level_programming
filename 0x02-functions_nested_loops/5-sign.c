#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n : pos or neg type int integer
 *
 * Description : will print + 0 or - depending on n and return
 *
 * return : 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
