#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point of program
 *
 *Retuen: This will return 0
 */


int main(void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX / 2;

	if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n<0)
	{
		printf("%d is negative\n",n);
	}
	else 
	{
		printf("%d is Zero\n");
	}
}
