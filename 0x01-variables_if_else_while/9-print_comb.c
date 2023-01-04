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
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
