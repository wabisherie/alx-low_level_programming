A project in which we learn about arguments to the main function.

Argc and Argv are the arguments we are working with.

argc contains the count of arguments supplied by the program while argv is a pointer to a string or characters. It is an array containg the CLine arguments and it is of size argc.

So for example here is a simple program which writes the arguments supplied to main on the program's standard output.



#include <stdio.h>

#include <stdlib.h>

int main(argc, char *argv[])
{
	int i
	for(i = 0, i < argc, i++);

	printf("%s\n", argv[i]);
}
