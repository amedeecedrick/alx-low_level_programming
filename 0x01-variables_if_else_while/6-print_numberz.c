#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print numbers from 0 to 10 using putchar
 * followed by new line
 *
 * Return: Always 0.
*/
int main(void)
{
	int d;

	for (d = 1; d < 10; d++)
	{
		putchar('0' + d);
	}
	putchar('\n');
	return (0);
}
