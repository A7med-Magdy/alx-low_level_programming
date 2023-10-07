#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Description: program prints alphabet without q and e.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
