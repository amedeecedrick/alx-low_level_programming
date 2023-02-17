#include <stdio.h>
/**
 * main - Print Alphabet in lower case followed by new line
 * Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 9 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
			}
		}
	}
	putchar('\n');
	return (0);
}
