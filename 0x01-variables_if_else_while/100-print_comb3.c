#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: It prints all possible combinations of
 * two numbers, printing only the smaller combination.
 * 
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

       for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			{
				if (!(j > i))
				{
					putchar(j + '0');
					putchar(i + '0');

					if ((j + i) < 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}

       putchar('\n');

       return (0);
}
