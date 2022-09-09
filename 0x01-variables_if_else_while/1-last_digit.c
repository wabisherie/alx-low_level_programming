#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point
 *return = Always 0 (Success)
 **/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d, n is\n");

	if(n > 5) {
		printf("and is greater than 5\n");
	}

	if(n ==0) {
		printf("and is 0\n");
	}

	else if(n < 6 !& 0) {
		printf("and is less than 6 and not 0\n");
	}
	return (0);

}
