#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the natural numbers from n to 98
 *
 * @n: the staring point
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
