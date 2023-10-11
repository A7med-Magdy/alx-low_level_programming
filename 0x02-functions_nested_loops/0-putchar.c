#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Description: Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
