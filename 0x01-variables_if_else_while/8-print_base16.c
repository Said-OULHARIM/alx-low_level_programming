#include <stdio.h>
/**
* main - Print the numbers in hexidecimal
* Return: 0
*/
int main(void)
{
	int integer;

	for (integer = '0'; integer <= '9'; integer++)
	{
	putchar(integer);
	}
	for (integer = 'a'; integer <= 'f'; integer++)
	{
	putchar(integer);
	}
	putchar('\n');
	return (0);
}
