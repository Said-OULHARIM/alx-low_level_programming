#include "main.h"
#include <unistd.h>

/*
 *main point of entry
 *using write to print the "_putchar"
 *return 0 on success (always)
 */
int main (void)
{
	char string[] = "_putchar";
	int i;
	for (i=0;i<8;i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
