#include <stdio.h>

/**
 * main- print alphabet except e & q
 * Return: Always 0 on completion
 */

int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		if (start != 'e' && start != 'q')
		putchar(start);
	}
	putchar('\n');
	return (0);
}
