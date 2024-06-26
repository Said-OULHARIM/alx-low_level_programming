#include "main.h"
#include <unistd.h>

/**
 *print_alphabet - main point of entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; i < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}	
}
