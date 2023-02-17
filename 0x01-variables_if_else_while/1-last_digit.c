#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of the number stored in the valiable n
 * according to the given condition
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	int P;
	char display[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	P = n % 10;
	/* your code goes there */
	if (P > 5)
		printf("%s %d is %d and is greater than 5\n", display, n, P);
	else if (P == 0)
		printf("%s %d is %d and is 0\n", display, n, P);
	else if (P < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", display, n, P);
	return (0);
}
