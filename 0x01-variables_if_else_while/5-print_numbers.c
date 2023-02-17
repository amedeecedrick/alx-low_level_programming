#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all digit of base 10
 * followed by new line
 *
 * Return: Always 0.
*/
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		printf("%d", b);
	}
	putchar('\n');
	return (0);
}
