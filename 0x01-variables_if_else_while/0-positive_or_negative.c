#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * main description: prints if a number is positive or negative
 * Retun: 0 (Return a number if either positive or negative)
*/
/*main function return positve or negative*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
