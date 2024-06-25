#include <stdio.h>
#include <unistd.h>

/*
 *main point of entry
 *using write to print the "_putchar"
 *return 0 on success (always)
 */
int main (void)
{
	write(1,"_putchar",8);
	return (0);
}
