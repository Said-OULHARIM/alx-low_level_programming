#include <stdio.h>

/**
 * main- print alphabet lowercase
 * Return: Always 0 on completion
 */
int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
