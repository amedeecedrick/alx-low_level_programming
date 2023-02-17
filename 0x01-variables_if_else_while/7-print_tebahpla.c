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

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
