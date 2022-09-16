#include <stdio.h>

/**
 * main - check the code for Wabi Sherie.
 *
 * Return: void.
 */

int main(void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		
		if (i % 3 ==0)
		{
			printf("Fizz");
		}

		else if (1 % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar (' ');
		}
		
		i++;
	}
	putchar ('\n');

	return (0);

}

