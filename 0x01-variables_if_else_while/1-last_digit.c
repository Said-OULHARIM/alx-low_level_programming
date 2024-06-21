#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * will print variable n will store a different value every time you run this program
 * Return: 0
 */
int main(void)
{
	int n;
	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;

	if (u > 5)
		printf("Last digit is %d and is greater than 5\n", u);
	else if (u == 0)
		printf("Last digit is %d and is 0\n", u);
	else
		printf("Last digit is %d and is less than 6 and not 0\n", u);

	return (0);
}
