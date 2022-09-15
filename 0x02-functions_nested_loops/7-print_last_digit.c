#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @i : int type
 *
 * Description : will print the last digit of @i to the output
 *
 *return = return value of the last digit
 */

int print_last_digit(int i)
{
	int r;

	if (i < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}

}
