#include <stdio.h>
#include <ctype.h>

/**
 * main -Entry point
 *
 * Description: Print alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al[] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 0;

	while (i < 26)
	{
		putchar(al[i]);
		i++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(toupper(al[i]));
	}

	putchar('\n');

	return (0);
}
