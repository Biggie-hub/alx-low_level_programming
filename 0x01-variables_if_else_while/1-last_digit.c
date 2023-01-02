#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Classifies the last digit of n to: >5, <6 or ==0
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit < 6)
	{
		if (last_digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_digit);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and %s"
					"not 0\n", n, last_digit);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	return (0);
}
