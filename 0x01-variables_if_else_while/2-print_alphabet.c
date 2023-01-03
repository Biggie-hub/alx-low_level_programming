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
	char ed = "\n";
	char al[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	int i = 0;

	while(i < 25)
	{
		putchar(al[i]);
		i++;
	}
	putchar(ed);

	return (0);
}
