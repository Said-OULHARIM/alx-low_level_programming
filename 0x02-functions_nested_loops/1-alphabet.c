#include "main.h"
#include <unistd.h>

/**
 *main - main point of entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
