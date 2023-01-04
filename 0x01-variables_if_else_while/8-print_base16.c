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
	char al[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (j < 6)
	{
		putchar(al[j]);
		j++;
	}

	putchar('\n');

	return (0);
}
