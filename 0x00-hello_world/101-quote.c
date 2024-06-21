#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point - expecting int return
 *
 * Return: We inputted the int 1 to return if code id good
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
