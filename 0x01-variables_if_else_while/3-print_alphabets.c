#include <stdio.h>

/**
 * main function in C- print alphabet as lowercase and then uppercase
 * Return: Always 0 on completion
 */
int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	for (start = 'A'; start <= 'Z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
