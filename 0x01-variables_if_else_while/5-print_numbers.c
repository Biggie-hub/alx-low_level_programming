#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print array of numbers 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");

	return (0);
}
