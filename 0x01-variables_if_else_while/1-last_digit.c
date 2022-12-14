#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - prints the last git of a random number
 *
 * Description: main function
 * return : Always 0 (Success)
 **/

int main(void)
{
	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf("Last digit is %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
