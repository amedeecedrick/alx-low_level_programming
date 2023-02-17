#include <stdio.h>
/**
 * main - Print Alphabet in lower case followed by new line
 * Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
