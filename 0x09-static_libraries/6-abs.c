#include "main.h"

/**
 * _abs - absolute value
 *
 * Description : computes the absolute value of int j
 *
 * @j :integer type number
 *
 * return = absolute value of @j
 */

int _abs(int j)
{
	if (j < 0)
	{
		return (j * -1);
	}
	else
	{
		return (j);
	}
}
