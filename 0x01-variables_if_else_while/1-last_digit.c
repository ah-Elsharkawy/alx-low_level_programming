#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	t = n % 10;
	if (t == 0)
	printf("%d and is 0\n", t);
	else if (t > 5)
	printf("%d and is greater than 5\n", t);
	else
	printf("%d and is less than 6 and not 0\n", t);
	return (0);
}
