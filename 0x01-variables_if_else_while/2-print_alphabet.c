#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print Alphabet in lower case
 * followed by new line
 *
 * Return: Always 0.
*/
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
