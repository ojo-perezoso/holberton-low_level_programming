#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is the main function for the last digit
 *
 * Return: the number 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and its grater than 5\n", n, n % 10);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
