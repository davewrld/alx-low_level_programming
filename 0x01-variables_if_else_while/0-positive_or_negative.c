#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry poin
 *
 *Return: Always 0 (Suceess)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
