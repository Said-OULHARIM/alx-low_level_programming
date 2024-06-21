#include <stdio.h>

/**
* main - Print numbers from 0 to 9
* with onlu putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 0; i < 10; i++)
	putchar(i + '0');

	putchar('\n');

	return (0);
}
