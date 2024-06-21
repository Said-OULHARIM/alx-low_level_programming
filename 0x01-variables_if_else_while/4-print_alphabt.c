#include <stdio.h>

/**
 * main - print alphabet as lowercase without e and q
 * Return : 0 success
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
