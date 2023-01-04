#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Print reverse alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al[] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 25;

	while (i !< 0)
	{
		putchar(al[i]);
		i--;
	}
	putchar('\n');

	return (0);
}
