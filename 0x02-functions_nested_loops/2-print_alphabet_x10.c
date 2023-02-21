#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet, in lowercase
 * 10 times
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
