#include "1-pi.h"
#include <stdio.h>

/**
 * main -checks wabi's code
 *
 * return: 0 Success
 */

int main(void)
{
	float a;
	float r;

	r = PI;
	a = PI * r * r;

	printf("%.3f\n", a);
	return (0);
}
