#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program prints a quote using write function
 *
 * Return: 1 (error)
*/

int main(void)
{	char q[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, q, 59);
	return (1);
}
