#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Print alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al[] = {'a', 'b', 'c', 'd', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 0;

	while (i < 24)
	{
		putchar(al[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
