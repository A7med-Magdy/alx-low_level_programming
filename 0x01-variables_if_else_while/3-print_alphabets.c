#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: C program prints the alphabet.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower_a = 'a';
	char upper_a = 'A';

	while (lower_a <= 'z')
	{
		putchar(lower_a);
		lower_a++;
	}
	while (upper_a <= 'Z')
	{
		putchar(upper_a);
		upper_a++;
	}
	putchar('\n');
	return (0);
}
