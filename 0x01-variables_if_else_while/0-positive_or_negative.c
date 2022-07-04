#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main ()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	/*your code goes here*/
	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printd("%d is zero\n", n);
	return (0);
}
