#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, a, lastd;

	a = 6;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		print("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than %d and not 0\n", n, lastd, a);
	}

	return (0);
}
