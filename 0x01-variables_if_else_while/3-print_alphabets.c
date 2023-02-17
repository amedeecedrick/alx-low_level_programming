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
	char up;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
